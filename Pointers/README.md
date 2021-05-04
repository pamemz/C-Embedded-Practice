# Pointers
A pointer is a variable that can be related to anotherone. It contains the address of another variable. Like any other variable it must be declared with a data type such as, int8_t, void, const int32_t, mytype_t, etc.
The general declaration for a pointer is:
```
type *ptr_name;
```
The * operator can be used to declare a pointer or later on to access its value.

## Instructions:
1.- Create a PTROperation.c file based on the already given PTROperation.h file.

2.- Create the functions as described in the PTROperation.h file.

3.- When your functions is ready you can test it by running the following command.
```
make.bat PTR
```
**Important: The command must be execute where the make.bat file is given.

## Bitwise Operators: 
### [*] - Decalatation
  The * operator, at first is useto declared the pointer variable. For example, the ptr_name is beign declared but it isn't pointing anywhere yet.
  ```
  int *ptr_name;
  ```
### [&] - Address
  The & operator, can be use to get the memory address location for any variable. So, to relate our pointer to a variable of the same type we use the veriable adrees so that we can point at it.  
  ```
  int var = 5;
  int *ptr_name2 = &var;
  ```
###  [*] - Value
  Once again, the * operator can be used after the declaration to get the value of the pointer that we are related to. 
  ```
  int var = 5;
  int *ptr_name2 = &var;
  printf(*ptr_name2);  //This will print the value of var - 5.
  ```

### [NULL] - Null pointers
  Whenever you have declared a pointer and do not have an address to assign it yet, it is always a good practice to assign it to a NULL value to avoid any future issues. There is a special place in memory for pointers to have a null value (memory address 0). Also, whenever the pointer point at this null address it will have no value.
  ```
  int *ptr = NULL;
  printf("%x\n", ptr);  // In these case the address is 0x0
  printf("%x\n", *ptr); // Segmentation fault, there is no value for null ptrs.
  ``` 

### The more you know
  Here are some examples of what to expect in the following cases:
  ```
  int var = 5;
  int *ptr_name = &var;
  printf("%x\n",var);     // Print var value - 5
  printf("%x\n",&var);    // Print var memory address
  printf("%x\n",ptr_n);   // Print var memory address
  printf("%x\n",*ptr_n);  // Print var value - 5
  printf("%x\n",&ptr_n);  // Print ptr memory address
  ```
