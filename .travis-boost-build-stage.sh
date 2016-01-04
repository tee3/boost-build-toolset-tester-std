#!/bin/sh

set -e

git clone --branch=develop-language-standard https://github.com/tee3/build /tmp/build
cd /tmp/build
./bootstrap.sh
