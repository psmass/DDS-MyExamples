Welcome to your first Connext DDS example! 

This example was generated for architecture x64Darwin17clang9.0, using the
data type ShapeTypeExtended from ShapeType.idl.
This example builds two applications, named ShapeType_publisher and
ShapeType_subscriber.

To Build this example:
======================
 
From your command shell, type:
> make -f makefile_ShapeType_x64Darwin17clang9.0
This command will build a release executable.
 
To build a debug version instead:
> make -f makefile_ShapeType_x64Darwin17clang9.0 DEBUG=1

To Modify the Data:
===================
To modify the data being sent, edit the ShapeType_publisher.cxx
file where it says:
/* Modify the instance to be written here */

To Run this Example:
====================
Make sure you are in the directory where the USER_QOS_PROFILES.xml file was
generated (the same directory this README file is in).
Run /Applications/rti_connext_dds-6.0.1/resource/scripts/rtisetenv_x64Darwin17clang9.0.bash
to make sure the Connext libraries are in the path, especially if you opened
a new command prompt window.
Run the publishing or subscribing application by typing:
> objs/x64Darwin17clang9.0/ShapeType_publisher <domain_id> <sample_count>
> objs/x64Darwin17clang9.0/ShapeType_subscriber <domain_id> <sample_count>
