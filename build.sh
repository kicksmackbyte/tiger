#!/bin/sh

cd tiger
g++ -I/usr/local/include/antlr4-runtime -lantlr4-runtime -v *.cpp -o tiger
