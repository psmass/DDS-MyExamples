![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***
Contains only a publisher / writer using XML App create. No event monitoring is done. 

To run this - compile and start the publisher (it only writes a Triangle topic ).

Using the Shapes Demo tool subscribe to a Triange with reliability, Transient_local_durability with a cache of 50.

You will see the Triangle appear with history immediately.

The XML file contains the QoS settings to support late joining on the writer (AND on the reader). An interesting item to note that because we have one particpant in the XML and Both publishers and subscribers for each Writer Type (e.g. Triangle and Square). If you comment in the Triangle Reader, there is no associated code and therefore nothing to acknowlege the writers reliable sending to the Triangle. An interesting effect is that after 296 samples writen, the writer appears to stall. With KEEP_LAST_HISTORY_QOS one might expect the writer cache though to simply be overwritten and Triangles continue to be published. But this is not what happens. Here it's not the writer cache that is 'throttling' the writing, but rather the window size of 40 (see the BuiltinQoSLib::Generic.StrictReliable). The transport layer stalls after 40 + 256 writes and waits for a timeout since the 'empty' reader does not respond.

Technically - since our Publishers and Subscribers are never intended to run in the same executable, in the XML, we should create two Participants (a Publisher and Subscriber) where the publisher.cxx and subscriber.cxx code selects the corresponding Participant(Library).
