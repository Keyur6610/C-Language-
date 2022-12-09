#include <stdio.h>

int factorial ();

int main ()
{

  factorial ();

  return 0;
}

int factorial ()
{
  int fact = 1;
  int i, n;

  printf ("Enter The Factorial : ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {

      fact = fact * i;

    }

  printf ("Factorial is : %d", fact);

  return 0;
}
