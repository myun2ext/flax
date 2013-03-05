@echo off
set CC=mingw32-c++
set CFLAGS=-O3
set SOURCES=flax2.cpp flax_parse.cpp
set OUTFILE=flax2.exe

@echo on
%CC% %INCLUDES% %CFLAGS% %SOURCES% -o %OUTFILE%

@REM # Test Exec
%OUTFILE% example.flax

@pause