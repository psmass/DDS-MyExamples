![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Only a publisher / writer using XML App create. Event monitoring is done via a Listener. 

The listener runs in the DDS thread context and is **not** best practice because any error in the listener will stall all of DDS. 

One advantage is that the code is simpler.
