#include <stdio.h>

int
main ()
{
#if defined (__STDC__)
   printf ("__STDC__ = %d\n",__STDC__);
#endif
#if defined (__STDC_VERSION__)
   printf ("__STDC_VERSION__ = %ldL\n",__STDC_VERSION__);
#endif

#if defined (__STDC__) && (__STDC_VERSION__ == 199409L)
   return 0;
#else
   return 1;
#endif
}
