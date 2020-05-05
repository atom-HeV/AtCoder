#!/bin/bash
if [ -z "$1" ]; then
    echo "番号が入力されていません"
    exit
fi
contestnum=$1
mkdir "../ABC/${contestnum}"
mv -i "abc${contestnum}_a.cpp" "../${contestnum}/"
mv -i "abc${contestnum}_b.cpp" "../${contestnum}/"
mv -i "abc${contestnum}_c.cpp" "../${contestnum}/"
mv -i "abc${contestnum}_d.cpp" "../${contestnum}/"
mv -i "abc${contestnum}_e.cpp" "../${contestnum}/"
mv -i "abc${contestnum}_f.cpp" "../${contestnum}/"