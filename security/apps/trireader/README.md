To use the files in this template directory:

1. Copy the template directory to a new directory for your application:

cd ..
cp -R template myapp

2. Change to the new directory:

cd myapp

3. Rename the OpenSSL configuration file to something that matches your app name:

mv appname.cnf myapp.cnf

Where "myapp" is your application's name.

4. Edit the <myapp>.cnf file and change the fields within it per the comments.
5. Edit the create_identity.sh file and change the string "demo_app" to your application name.
6. Edit the sign_permissions.sh file and change the string "demo_app" to your application name.
7. Run the create_identity.sh file to create the private key and identity cert for your application.

./create_identity.sh

8. Edit the appname_permissions.xml file to set the permissions for your application.
   Follow the directions provided in the comments in the XML file.  Save your file.

9. Sign the permissions file:

./sign_permissions.sh

10. Modify USER_QOS_PROFILES.xml to point to your security artifacts and the copy it to the deploy folder
