#include <stdint.h>

#if defined(BWTESTS)
#include "./Bitwise/BWtests.h"
#elif defined(PTRTESTS)
#include "./Pointers/PTRtests.h"
#endif


void main()
{  

  runtests();

  //variables
  /*const int8_t BIT=2;
  const int8_t * BYTE;
  int8_t cleared;

  int8_t *A;

  uint8_t var = 5;
  uint8_t *ptr = &var;
  uint8_t **ptr2 = &ptr;
  uint8_t ***ptr3 = &ptr2;

  BYTE = &var;
  A = &cleared;

  // bit clear
  cleared = bitclear(BYTE,BIT);
  printf("bit cleared: %d\n",cleared);

  //bit set
  bitset(A,BIT);
  printf("nuevo valor seteado %d\n",cleared);

  //triple pointer *3
  TriplePointer(ptr3);
  printf("var: %d\n",var);
  printf("*ptr: %d\n",*ptr);
  printf("*ptr2: %d\n",**ptr2);
  printf("*ptr3: %d\n",***ptr3);*/

  
}