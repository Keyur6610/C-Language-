#include <stdio.h>

int main ()
{
  int a[2][2], i, j, max;


  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{
	  printf ("Enter The Element : ");
	  scanf ("%d", &a[i][j]);
	}

    }

  printf ("\n-------Matrix--------\n");

  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{

	  printf ("%d\t", a[i][j]);
	}
      printf ("\n");
    }

  max = a[0][0];

  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{

	  if (a[i][j] > max)
	    {

	      max = a[i][j];
	    }
	}

    }

  printf ("\nMaximum Number is : %d", max);
  
  return 0;
}
