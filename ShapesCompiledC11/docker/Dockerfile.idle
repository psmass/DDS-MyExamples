FROM ubuntu

# /App contains all four Shapes pub services (Base: Square, Circle, Triangle,
# and ext rotate Triangle) along with the USER_QOS_PROFILES.xml.

WORKDIR /app
ADD addfiles /app

#Add nettools and Ping
RUN apt-get update && apt-get -y install sudo
RUN sudo apt-get update && sudo apt-get -y install net-tools
RUN sudo apt-get update && sudo apt-get -y install iputils-ping
RUN sudo apt-get update && sudo apt-get -y install nano

#CMD /app/ShapeType_publisher_rotate_triangle

