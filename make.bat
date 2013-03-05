@echo off
set CC=mingw32-c++
set CFLAGS=-O3
set OUT=flax2.exe

@echo on

%CC% %INCLUDES% %CFLAGS% flax2.cpp -o flax2.exe
pause