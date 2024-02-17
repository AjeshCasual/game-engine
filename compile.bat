@echo off
g++ -o main.exe src/*.cpp -std=c99 -Wall -Iexternal -DPLATFORM_DESKTOP -lmsvcrt -lraylib -lopengl32 -lgdi32 -lwinmm -lkernel32 -lshell32 -luser32 -lbox2d -mwindows -I include -L lib 2> logs/g.txt
main.exe > logs/main.txt