@echo off
set arg1=%1

IF "%arg1%"=="BW" (
  gcc -DBWTESTS main.c ./Bitwise/BWtests.o ./Bitwise/BWOperations.c -o MAIN.EXE
  @echo "Bitwise Build finieshed" 
)

IF "%arg1%"=="PTR" (
  gcc -DPTRTESTS main.c ./Pointers/PTRtests.o ./Pointers/PTROperations.c -o MAIN.EXE
  @echo "Pointer Build finieshed" 
)

IF "%arg1%"=="RUN" (
  @echo "Executing MAIN.EXE"
  MAIN.EXE
)
