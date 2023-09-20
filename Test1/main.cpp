/*
 * Figure 3.33
 */

#include <iostream>
#include <string.h>
#include <ostream>
#include <cstdio>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

int main(void)
{
    //declare variables
    int size = 40;
	char *args[size] = { NULL };
	char* userInput = new char[size];
	string temp = "";
	char* piece;
	int count = 0;
	int running = 1;

	pid_t pid;

	//loop
    while(running==1){
		fflush(stdout);
		//reset token counter
		count = 0;

		//promt for userInput
		cout << "Enter command:" << endl;
		getline(cin, temp); //read input line as string
		strcpy(userInput, temp.c_str());//convert input string to char array

		//break char array into pieces by space and store them in 2d array call args
		piece = strtok(userInput, " ");
		args[count++] = piece;
		while (piece != NULL) {
			piece = strtok(NULL, " ");
			args[count++] = piece;
		}

        
		//check exit
    	if(strcmp(args[0], "exit") == 0){
    	    running = 0;
    	    break;
    	}



	    /* fork a child process */
	    pid = fork();


    	if (pid < 0) { /* error occurred */
	    	fprintf(stderr, "Fork Failed");
	    	return 1;
    	}
	    else if (pid == 0) { /* child process */
	    	execvp(args[0],args);
	    	printf("LINE J");
	    }
	    else { /* parent process */
	    	/* parent will wait for the child to complete */
	    	wait(NULL);
	    }
    }
	return 0;
}
