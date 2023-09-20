##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Polynomial
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/hekai/Desktop/CS3305/Workspace1
ProjectPath            :=C:/Users/hekai/Desktop/CS3305/Workspace1/Polynomial
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=hekai
Date                   :=23/09/2021
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
ObjectsFileList        :="Polynomial.txt"
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
Objects0=$(IntermediateDirectory)/polytest1.cpp$(ObjectSuffix) $(IntermediateDirectory)/poly1.cpp$(ObjectSuffix) $(IntermediateDirectory)/ppp.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/polytest1.cpp$(ObjectSuffix): polytest1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/polytest1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/polytest1.cpp$(DependSuffix) -MM polytest1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/CS3305/Workspace1/Polynomial/polytest1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/polytest1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/polytest1.cpp$(PreprocessSuffix): polytest1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/polytest1.cpp$(PreprocessSuffix) polytest1.cpp

$(IntermediateDirectory)/poly1.cpp$(ObjectSuffix): poly1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/poly1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/poly1.cpp$(DependSuffix) -MM poly1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/CS3305/Workspace1/Polynomial/poly1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/poly1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/poly1.cpp$(PreprocessSuffix): poly1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/poly1.cpp$(PreprocessSuffix) poly1.cpp

$(IntermediateDirectory)/ppp.cpp$(ObjectSuffix): ppp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ppp.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ppp.cpp$(DependSuffix) -MM ppp.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/hekai/Desktop/CS3305/Workspace1/Polynomial/ppp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ppp.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ppp.cpp$(PreprocessSuffix): ppp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ppp.cpp$(PreprocessSuffix) ppp.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


