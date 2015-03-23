#!/bin/sh
clang -std=c++11 -g -O0 -o sha2 main.cpp sha256.cpp -lbitcoin -lstdc++


