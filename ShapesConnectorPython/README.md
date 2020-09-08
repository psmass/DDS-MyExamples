# Simple Example

![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png). 

## Example description
In this simple example, `writer.py` periodically publishes data for a
*Square* topic, and `reader.py` subscribes to the topic and prints all the
data samples it receives.

## Running the example

cd simple/

Run the following commands in different shells:

    $ python reader.py
    $ python writer.py

You can run these commands in any order, and you can run multiple instances of
the writer and the reader. You can also run any other *DDS* application that
publishes or subscribes to the *Square* topic. For example, you can use
[RTI Shapes Demo](https://www.rti.com/free-trial/shapes-demo).

