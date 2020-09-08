**This project provides an example of setting up a simple RTI Connext DDS Application using Visual Studio Code (VSCode)**

*** THIS DIRECTORY CONTAINS XML CONFIGURED PARTICIPANTS AND (DYNAMIC) DATA-TYPES (i.e., XML is FULLY USED) ***


It assumes you have licensed access to RTI's Connext DDS libraries and tools.

The code will Publish and Subscribe to standard Shapes (example here is a Blue Square) which can be subscribed to by the Connext DDS Shapes Demo.

Environment: MacOS (Catalina), Visual Studio Code 

Plugins to load: 
* Microsoft C/C++ w/IntelliSense & code Browsing
* XML Launguage Support by Redhat 
* RTI - IDL Systax highlighting for OMG IDL - https://github.com/rticommunity/vscode-omg-idl
        Download and 'Side-load' the extension (i.e. copy the entire folder to extensions area):
        
               - Mac/Linux:  ~/.vscode/extensions
               
               - Windows: %USERPROFILE%\.vscode\extensions
                
* CodeLLDB - really nice for multi-threaded code debug [Rti folks can refer to the internal 'Howto' confluence page setting up C/C++ debugging with visual studio Code].  I had no problem just getting it from the extensions market place and loading and enabling it like any other extension. You'll also need to modify the launch.json with "lldb" as shown in this projects file.

Notes:
1) After running rti Code Generator (rtiddsgen) at the workspace level, copy the makefile_* from cpp/ to workspace level as 'makefile' and add a ```make all``` and ```make clean``` - This will prevent the makefile from being overwritten in subsequent rtiddsgen runs.

2) Also review the project level .json files - particularly 'launch.json' and 'tasks.json' they contain the list of build options when you select cmd^B as well as the debug option under the debug run explorer allowing you to run and debug using VSC.

3) For full source debug - you'll need DDS source code (and built debug libraries) and point LLDB to it, otherwise you'll see the assembly code.

4) Besure to point LLDB via the "relativePathBase":"${workspaceFolder}/cpp", statement in the vscode launch.json file.

Recommended Directory Structure:(Change your makefile appropriately)

    SHAPES (WORKSPACE)
        |
        +---.vscode 
        +---.gitignore
        +--- README.md
        +--- makefile (customized version of rtiddsgen)
        |
        + cpp
        + model
        + objs
        
HOWTO: Shapes Publisher Code walkthrough

Create to ./model / ./cpp directories - in the structure shown above
ShapeType.idl should be in the ./model dir 
   if not: cp /Applications/rti_connext_dds-6.0.1/resource/idl/ShapeType.idl .

VScode project  should be in your work area - e.g. Shapes.code-workspace
    There should be four JSON files in .vscode - two of them will be specific to ShapesType

Create a local Git Repo (if you use Git):
    From VS - initialize a repo at the top level of your work area (you should see a .git file)
    Create a .gitignore file in your shapes work area top level dir

    From your desktop git app (recommended ) - add the repo and location on your local machine

Run 6.0.1 (or your flavor) RTI Code Gen from Utilities from the launcher.
Update the input file (to point to the ShapesType.idl files, and output to point to the ./cpp (Default generation should be fine for C++)

Select RUN
(you should see the ./cpp area filled with skeleton .cxx and .h files

Copy and modify the make file from the ./cpp generated version to the top level shapes dir.

	Rename it simply makefile 

	modify the make file with the following:
	SOURCE_DIR = ./cpp/
	add line ~ line85 above the &(TARGET_ARCH) : … all: $(TARGET_ARCH)
	Add lines (at the end of the file) 
	clean: 
		rm -r objs/

Build a pub/sub:
Open a terminal in VSCODE and type make all

Alternatively you should be able to build from the VS Run Pulldown or the debug pulldown

Clean up the .gitIgnore file to remove checkins of the output files
``` cpp/ndds
    objs
    objs/x64Darwin17clang9.0
    objs/x64Darwin17clang9.0/ShapeType_publisher
    objs/x64Darwin17clang9.0/ShapeType_subscriber
    objs/x64Darwin17clang9.0/ShapeType_subscriber.o
    objs/x64Darwin17clang9.0/ShapeType.o
    objs/x64Darwin17clang9.0/ShapeTypePlugin.o
    objs/x64Darwin17clang9.0/ShapeTypeSupport.o
```
Check it into your local GitHub Repo
