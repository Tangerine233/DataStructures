##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=BST
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/hekai/Desktop/KSU/Old/2021 Fall/CS 3305 (Data Structures)/CS3305/Workspace1"
ProjectPath            :="C:/Users/hekai/Desktop/KSU/Old/2021 Fall/CS 3305 (Data Structures)/CS3305/Workspace1/BST"
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=hekai
Date                   :=11/02/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="BST.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(ObjectSuffix): ../../../BST/testBST.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(DependSuffix) -MM ../../../BST/testBST.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/KSU/Old/2021 Fall/CS 3305 (Data Structures)/BST/testBST.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(PreprocessSuffix): ../../../BST/testBST.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_BST_testBST.cpp$(PreprocessSuffix) ../../../BST/testBST.cpp

$(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(ObjectSuffix): ../../../BST/myTestBST.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(DependSuffix) -MM ../../../BST/myTestBST.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/KSU/Old/2021 Fall/CS 3305 (Data Structures)/BST/myTestBST.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(PreprocessSuffix): ../../../BST/myTestBST.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_BST_myTestBST.cpp$(PreprocessSuffix) ../../../BST/myTestBST.cpp

$(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(ObjectSuffix): ../../../BST/removeDouplicates.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(DependSuffix) -MM ../../../BST/removeDouplicates.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/KSU/Old/2021 Fall/CS 3305 (Data Structures)/BST/removeDouplicates.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(PreprocessSuffix): ../../../BST/removeDouplicates.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_BST_removeDouplicates.cpp$(PreprocessSuffix) ../../../BST/removeDouplicates.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


