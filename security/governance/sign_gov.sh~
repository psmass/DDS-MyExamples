#!/bin/sh
echo "Signing governance"
openssl smime -sign -in demo_governance.xml -text -out ../apps/deployall/demo_governance_signed.p7s -signer ../ca/permissions/permissionscacert.pem -inkey ../ca/permissions/private/permissionscakey.pem
