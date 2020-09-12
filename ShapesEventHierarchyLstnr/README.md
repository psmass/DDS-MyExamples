![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Both a publisher and Subscriber and demonstrates Listener Hierarchy
(Note Waitsets don't have the notion of Hierarchy or Entity Tree Structure (e.g., Writers->Publishers->Particicpant) and roll-up of events) 

This code Sets up a Subscriber Listener which has an on_data_on_readers set and thus overrides the Reader event. The subcriber then notifies the readers of data availabilty. It does this three times and then deregisters itself allowing the readers to directly get the data_available event. Not that all listeners
EXCEPT the DDSDomainParticipantListener are thread-safe. The Participant will crash (believe me) if you attempt to deregister it from itself.


