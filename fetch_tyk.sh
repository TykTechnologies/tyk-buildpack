#!/bin/sh
PKG_URL=https://packagecloud.io/tyk/tyk-gateway/packages/el/7/tyk-gateway-2.3.3-1.x86_64.rpm/download
wget $PKG_URL
mkdir tyk
tar xf download --strip-components=3 -C tyk
rm download
