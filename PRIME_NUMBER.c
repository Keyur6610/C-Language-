#include <stdio.h>

int main ()
{

  int i, n;
  int c = 0;
  printf ("Enter The Number : ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {

      if (n % i == 0)
	{
	  c++;
	}
    }

  if (c == 2)
    {
      printf ("\nNumber is Prime");
    }

  else
    {
      printf ("\nNumber is Not Prime");
    }
  return 0;
}
