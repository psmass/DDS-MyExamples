"""
 (c) 2020 Copyright, Real-Time Innovations, Inc.  All rights reserved.
 RTI grants Licensee a license to use, modify, compile, and create derivative
 works of the Software.  Licensee has the right to distribute object form only
 for use with RTI products.  The Software is provided "as is", with no warranty
 of any type, including any warranty for fitness for any purpose. RTI is under
 no obligation to maintain or support the Software.  RTI shall not be liable for
 any incidental or consequential damages arising out of the use or inability to
 use the software.
 """

import rti.connextdds as dds
from time import sleep
from os import path as os_path

file_path = os_path.dirname(os_path.realpath(__file__))
qos_provider = dds.QosProvider(os_path.join(file_path, "..", "system_designer_shapes.xml"))
participant = qos_provider.create_participant_from_config(
    "NewParticipantLibrary1::ShapesParticipant1")
shape_type = qos_provider.type("ShapeTypeExtended")
sample = dds.DynamicData(shape_type)
writer = dds.DynamicData.DataWriter.find_by_name(
    participant, "TrianglePublisher1::TriangleWriter")

print("Waiting for subscriptions...")
while (not writer.matched_subscriptions):
    sleep(0.1)

print("Found subscriber, publishing samples...")

for i in range(1, 100):
    sample["x"] = i
    sample["y"] = i * 2
    sample["shapesize"] = 30
    sample["color"] = "BLUE"
    writer.write(sample)
    sleep(0.5) # Write at a rate of one sample every 0.5 seconds, for ex.
print("Exiting...")
writer.wait_for_acknowledgments(dds.Duration.infinite) # Wait for all subscriptions to receive the data before exiting
