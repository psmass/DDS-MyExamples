![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Contains only a publisher / writer using XML App create. 

Event Monitoring is done for a subscriber match via Polling. With the Publisher, polling cannot be done in line or the writing (to potentially other subscribers) would be blocked. Instead a thread is created which sits and polls for status change of PUBLICATION MATCHES and prints out the total number of them.

The polling can be seen if you run a CPU performance tool. Here you will see the ShapesPublisher using >90% of the CPU.
