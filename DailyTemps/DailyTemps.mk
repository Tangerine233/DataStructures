##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DailyTemps
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/hekai/Desktop/CS3305/Workspace1
ProjectPath            :=C:/Users/hekai/Desktop/CS3305/Workspace1/DailyTemps
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=hekai
Date                   :=02/09/2021
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
ObjectsFileList        :="DailyTemps.txt"
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
Objects0=$(IntermediateDirectory)/TestTemps.cpp$(ObjectSuffix) $(IntermediateDirectory)/DailyTemps.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/TestTemps.cpp$(ObjectSuffix): TestTemps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TestTemps.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TestTemps.cpp$(DependSuffix) -MM TestTemps.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/CS3305/Workspace1/DailyTemps/TestTemps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TestTemps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TestTemps.cpp$(PreprocessSuffix): TestTemps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TestTemps.cpp$(PreprocessSuffix) TestTemps.cpp

$(IntermediateDirectory)/DailyTemps.cpp$(ObjectSuffix): DailyTemps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DailyTemps.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DailyTemps.cpp$(DependSuffix) -MM DailyTemps.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/CS3305/Workspace1/DailyTemps/DailyTemps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DailyTemps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DailyTemps.cpp$(PreprocessSuffix): DailyTemps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DailyTemps.cpp$(PreprocessSuffix) DailyTemps.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


