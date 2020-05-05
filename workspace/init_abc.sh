#!/bin/bash
if [ -z "$1" ]; then
    echo "番号が入力されていません"
    exit
fi
contestnum=$1
echo -n > "abc${contestnum}_a.cpp"
echo -n > "abc${contestnum}_b.cpp"
echo -n > "abc${contestnum}_c.cpp"
echo -n > "abc${contestnum}_d.cpp"
echo -n > "abc${contestnum}_e.cpp"
echo -n > "abc${contestnum}_f.cpp"