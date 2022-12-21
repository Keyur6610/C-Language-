#include <stdio.h>

int main ()
{

  int i, n, num, a[5];

  printf ("Enter The 5 Values:\n\n");

  for (i = 0; i < 5; i++)
    {

      printf ("Enter Value at Position [%d] : ", i);

      scanf ("%d", &a[i]);

    }

  printf ("\n\n----------Value To Position----------\n\n");
  printf ("Enter Value To Find it Position : ");
  scanf ("%d", &num);

  for (i = 0; i < 5; i++)
    {

      if (a[i] == num)
	{

	  printf ("Position is : [%d]", i);

	}

    }

  printf ("\n\n----------Position To Value---------\n\n");
  printf ("Enter Position: ");
  scanf ("%d", &n);
  printf ("Value is : %d", a[n]);

  return 0;

}
