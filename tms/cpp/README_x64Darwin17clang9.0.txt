Welcome to your first Connext DDS example! 

This example was generated for architecture x64Darwin17clang9.0, using the
data type MicrogridMembershipApproval from tmsTestExample.idl.
This example builds two applications, named tmsTestExample_publisher and
tmsTestExample_subscriber.

To Build this example:
======================
 
From your command shell, type:
> make -f makefile_tmsTestExample_x64Darwin17clang9.0
This command will build a release executable.
 
To build a debug version instead:
> make -f makefile_tmsTestExample_x64Darwin17clang9.0 DEBUG=1

To Modify the Data:
===================
To modify the data being sent, edit the tmsTestExample_publisher.cxx
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
> objs/x64Darwin17clang9.0/tmsTestExample_publisher <domain_id> <sample_count>
> objs/x64Darwin17clang9.0/tmsTestExample_subscriber <domain_id> <sample_count>
