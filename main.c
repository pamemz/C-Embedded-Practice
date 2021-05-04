#include <stdint.h>

#if defined(BWTESTS)
#include "./Bitwise/BWtests.h"
#elif defined(PTRTESTS)
#include "./Pointers/PTRtests.h"
#endif


void main()
{  
  runtests();
}