#!/bin/bash
xmake f -c -p linux --toolchain=gcc-13 -a x64 -k binary -m release -o build/release-linux -vy &&\
xmake build -vy