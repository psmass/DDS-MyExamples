![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


*** THIS DIRECTORY CONTAINS: ***

Contains both a Publisher and Subcriber using XML application creation, dynamic data along with a waitset for event monitoring (and in the case of the reader for reading data / data_available). Again, the waitset in the case of the publisher has to be run in a separate thread to prevent the wait, from blocking the writing. Here other subscribers could be receiving samples, and writing is not an event.  The reader is a different story and requires no separate thread. This is because data-available is considered an event. So, for the reader, we can block and then parse the event as either data or status and process it accordingly. 

This is **Best Practice** as it utilizes XML app create, Dynamic Data, Waitset processing and efficient CPU overhead (again < 3%).
