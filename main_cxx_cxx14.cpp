#include <iostream>

int
main ()
{
#if defined (__cplusplus)
   std::cout << "__cplusplus = " << __cplusplus << "L\n";
#endif

#if defined (__cplusplus) && (__cplusplus == 201402L)
   return 0;
#else
   return 1;
#endif
}
