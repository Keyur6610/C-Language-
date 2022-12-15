#include <stdio.h>

int main ()
{
  int i, j, k, num, n, space;

  n = 3;
  num = 1;

  for (i = 0; i <= n; i++)
    {

      for (j = 0; j <= i; j++)
	{

	  for (space = 0; space <= n - i; space++)
	    {
	      printf (" ");
	    }

	  printf ("%d", num);
	  num = num + 1;

	}
      printf ("\n");
    }

  return 0;
}
