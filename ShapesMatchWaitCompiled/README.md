![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Contains both a publisher / writer and subscriber using XML App create as well as a waitset to monitor events for each. The subcriber also does its reading via a waitset. This is both efficent (<3% CPU utilization) and **Best Practice** since the thread runs in the users context and any error does not ripple to other applications.

