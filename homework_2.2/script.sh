#!/bin/bash

g++ -o program main.cpp sortings.cpp io.cpp -std=c++23

if [ $? -eq 0 ]; then
    echo "Компиляция завершена. Запуск программы..."
    ./program
else
    echo "Ошибка компиляции."
fi
