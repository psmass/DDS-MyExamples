![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Contains both a publisher / writer and subscriber using compiled participants. Each uses a waitset to monitor events for each. The subcriber also does its reading via a waitset. This is both efficent (<3% CPU utilization) and **Better Practice** since the thread runs in the users context and any error does not ripple to other applications. ** Best Practice ** is to use an XML Application Created particpant as well as dynamic data and a waitset. See ShapesMatchWaitset.

