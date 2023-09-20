#include <unistd.h>
#include <sys/wait.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <ostream>
#include <cstdio>
#include <stdio.h>
#include <sys/types.h>

using namespace std;

const int READ = 0, WRITE = 1;

int main(int argc, char *argv[]) {
	//declare variables
	int size = 40;
	char *args1[size] = { NULL };
	char *args2[size] = { NULL };
	char* userInput = new char[size];
	string temp = "";
	char* piece;
	int count1 = 0;
	int count2 = 0;
	int running = 1;
	bool jump = false;

	int pipefd[2];

	if (pipe(pipefd) == -1) {
		std::cerr << "Error creating pipe\n";
		return 1;
	}
	int pid2 = -1, pid1 = -1;

	//loop
	while (running == 1) {
		fflush(stdout);
		//reset token counter
		count1 = 0;
		count2 = 0;

		//promt for userInput
		cout << "Enter command:" << endl;
		getline(cin, temp); //read input line as string
		strcpy(userInput, temp.c_str());//convert input string to char array

		//break char array into pieces by space and store them in 2d array call args
		piece = strtok(userInput, " ");
		args1[count1++] = piece;
		while (piece != NULL) {
			piece = strtok(NULL, " ");
			if (!jump&&strcmp(piece, "|")==0) {
				jump = true;
            }
			if (!jump) {
				args1[count1++] = piece;
			}
			else {
				args2[count2++] = piece;
			}
		}


		//check exit
		if (strcmp(args1[0], "exit") == 0) {
			running = 0;
			break;
		}



		pid1 = fork();
		if (pid1 == 0) {
			close(pipefd[READ]);
			dup2(pipefd[WRITE], WRITE);
			//exec*p("ls", "ls", "-l", 0);
			execvp(args1[0], args1);
		}
		else {
			pid2 = fork();
			if (pid2 == 0) {
				close(pipefd[WRITE]);
				dup2(pipefd[READ], READ);
				//execlp("wc", "wc", "-l", 0); 
				execvp(args2[0], args2);
			}
		}
		//waitpid(pid1, nullptr, 0);
		waitpid(pid1, 0, 0);

		close(pipefd[WRITE]);
		//waitpid(pid2, nullptr, 0);
		waitpid(pid1, 0, 0);

	}
	return 0;
}
