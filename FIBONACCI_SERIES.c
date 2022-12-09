#include <stdio.h>

int fibonacci ();

int main ()
{

  fibonacci ();
  return 0;

}

int fibonacci ()
{
  int i, n, f[i];

  f[0] = 0;
  f[1] = 1;
  printf ("----------Fibonacci Series----------\n\n");
  printf ("Enter The Number of Terms : ");
  scanf ("%d", &n);
  printf ("\nFibonacci Series : ");
  printf ("%d, ", f[0]);
  printf ("%d, ", f[1]);

  for (i = 2; i <= n; i++)
    {

      f[i] = f[i - 1] + f[i - 2];
      printf ("%d, ", f[i]);

    }

  return 0;
}
