@echo off
set CC=mingw32-c++
set INCLUDES=./include
set CFLAGS=-O3
set SOURCES=flax_main.cpp
set OUTFILE=flax.exe

@echo on
%CC% -I %INCLUDES% %CFLAGS% %SOURCES% -o %OUTFILE%

flax.exe

@pause