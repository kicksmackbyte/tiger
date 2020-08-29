#!/bin/sh

export CLASSPATH=".:/home/twice/tiger/antlr-4.7.2-complete.jar:$CLASSPATH"
alias antlr4="java -Xmx1g -cp ./antlr-4.7.2-complete.jar:. org.antlr.v4.Tool -Dlanguage=Cpp -no-listener -visitor -o target"
alias grun="java org.antlr.v4.gui.TestRig"
