# Bitwise
Bitwise or Binary operation are specific operators that takes two variables, usually from the same length, and performs a logical operation to manipulate its bits.

## Instructions:
1.- Create a BWOperation.c file based on the already given BWOperation.h file.

2.- Create the functions as described in the BWOperation.h file.

3.- When your functions is ready you can test it by running the following command.
```
make.bat BW
```
**Important: The command must be execute where the make.bat file is given.

## Bitwise Operators: 

### [&] - AND
Based on the AND logic table can compare all the bits of two variables

```
  |X Y| out
  |0 0| 0
  |0 1| 0
  |1 0| 0
  |1 1| 1
```

Example:

```
  // Supose you have a 8bit architecture
  char A = (0x05)&(0x06) //Hex (101)(110)
  // The result is in bin (0000 0100) in hex (0x04);
```

### [|] - OR
Based on the OR logic table can compare all the bits of two variables 

```
  |X Y| out
  |0 0| 0
  |0 1| 1
  |1 0| 1
  |1 1| 1
```

Example:

```
  // Supose you have a 8bit architecture
  char A = (0x05)&(0x06) //Hex (101)(110)
  // The result is in bin (0000 0111) in hex (0x07);
```
###  [^] - XOR
Based on the OR logic table can compare all the bits of two variables 

```
  |X Y| out
  |0 0| 0
  |0 1| 1
  |1 0| 1
  |1 1| 0
```
Example:
```
  // Supose you have a 8bit architecture
  char A = (0x05)^(0x06) //Hex (101)(110)
  // The result is in bin (0000 0011) in hex (0x03);
```
### [<<]- left shift
This special operator shift to the left a given value n spaces to the left starting from the 0 position.

```
  val << n
```

Example:

```
  // Supose you have a 8bit architecture
  1<<2 // 0000 0100
```


### [>>]- right shift
This special operator shift to the right a given value n spaces to the right starting from the last position.

```
  val >> n
```

Example:

```
  // Supose you have a 8bit architecture
  1>>3 // 0001 0000
```
###  [~] - NOT
Is the complement value of the given variable.

```
  // Supose you have a 8bit architecture
  char x = 0x18; //Hex -> bin (0001 1000)
  x = ~x;        //~(0001 1000) ->  (1110 0111)
```


