#include <stdio.h>


int main()
{
  char az;
 
  for(az='a'; az<='z'; az++)
    { if(az != 'q' && az != 'e')
	{
putchar(az);
	}
    }
  putchar('\n');
  return 0;

}
