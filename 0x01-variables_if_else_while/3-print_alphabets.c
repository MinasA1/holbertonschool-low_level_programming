#include <stdio.h>


int main()
{
  char az;
 
  for(az='a'; az<='z'; az++)
    { 
putchar(az);
 if( az='z')
	{for(az='A'; az<='Z'; az++)
	    {
	      putchar(az);
	    }
	}
    }
  putchar('\n');
  return 0;

}
