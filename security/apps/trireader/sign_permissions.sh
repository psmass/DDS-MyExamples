#!/bin/bash

# Change "demo_app" to the name of your application
app_name=trireader

echo "Signing permissions"
openssl smime -sign -in ${app_name}_permissions.xml -text -out ./deploy/${app_name}_permissions_signed.p7s -signer ../../ca/permissions/permissionscacert.pem -inkey ../../ca/permissions/private/permissionscakey.pem
