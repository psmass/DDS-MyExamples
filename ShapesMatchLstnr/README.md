![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Only a publisher / writer using XML App create. Event monitoring is done via a Listener. 

While the Listener is way more efficent than polling, a listener runs in the DDS thread context. This is **not** best practice because any error in the listener will stall all of DDS. CPU utilization is < 3%.

One advantage is that the code is simpler.
