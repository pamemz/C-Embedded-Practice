# C-Practice
The main purpose of this repository is for people to have an automated test cases so they able practice their C language domain by creating C files and the functions given a header file.

## Dependencies:
1.- Have gcc installed in your computer. You can verify it by executing in the cmd:
```
gcc --version
```
If it is not installed you can follow the following this [link] tutorial. (not mine)

[link]: https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j

2.- Use Windows

## Tests:
To start your test first you must create the missing .c file inside the folder of the topic you are interested on working. To create it based yourself in the already given .h file for the needed functions and their descriptions for functionality. For more information check the README inside each exercise topic folder.
The main topics are:

> Bitwise	[BW]

> Pointers	[PTR]

> Arrays	[ARR]

> Strings	[STR]

> Structs and Enums	[SE]

##How to run the test:

To run your code use the following command; where [] is the abbreviation  of the exercise.

```
make.bat [] 
```
Example; running Bitwise tests:
```
make.bat BW
```
When your code is ready to compile execute the .exe file that was generated or use the RUN command in the .bat file.
```
make.bat RUN
```
or
```
MAIN.EXE
```

** If you do not want to use the given make.bat you can base your compilation command with the one inside the make.bat by opening it in a text editor.
