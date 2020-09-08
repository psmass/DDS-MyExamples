#!/bin/bash

# Change "demo_app" to the name of your application
app_name=trireader

echo "Creating identity for ${app_name}:"

echo "+ Private key deployed to './deploy/private/${app_name}.key'"
openssl genrsa -out ./deploy/private/${app_name}key.pem 2048

echo "+ Create Certificate Signing Request: './${app_name}.csr'"
openssl req -config ${app_name}.cnf -new -key ./deploy/private/${app_name}key.pem -out ${app_name}.csr

echo "+ Requesting signing of certificate"
openssl ca -config ../../ca/identity/openssl.cnf -days 365 -in ${app_name}.csr -out ./deploy/${app_name}.pem
echo "+ Signed certificate deployed to: './deploy/${app_name}.pem'"

# For convenience, copy the template permissions file to one for this app
echo "+ Edit permissions for this app in: '${app_name}_permissions.xml'"
echo "+ Then sign permissions using sign_permissions.sh"
mv appname_permissions.xml ${app_name}_permissions.xml
