#!/bin/bash
xmake f -c -p linux -a x86_64 --toolchain=gcc -k binary -m release --runtimes=c++_static -o build/release-linux -vy &&\
xmake build -vy demo