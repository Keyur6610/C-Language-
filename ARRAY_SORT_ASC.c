#include <stdio.h>

int main ()
{
  int i, j, a, n = 5, num[5];


  printf ("Enter The 5 Elements: \n");


  for (i = 0; i < n; i++)
    {

      scanf ("%d", &num[i]);
    }

  for (i = 0; i < n; i++)
    {

      for (j = i + 1; j < n; j++)
	{

	  if (num[i] > num[j])
	    {

	      a = num[i];
	      num[i] = num[j];
	      num[j] = a;

	    }

	}

    }

  printf ("\nAscending Order\n");

  for (i = 0; i < n; i++)
    {

      printf ("%d\n", num[i]);
    }


  return 0;
}
