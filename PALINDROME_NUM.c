#include <stdio.h>

int main ()
{
  int n, n1, rev = 0;

  printf ("Enter Number :");
  scanf ("%d", &n);

  n1 = n;

  while (n > 0)
    {

      rev = rev * 10 + n % 10;
      n = n / 10;

    }

  if (n1 == rev)
    {
      printf ("Number is Palindrom");
    }
  else
    {

      printf ("Number is Not Palindrom");
    }

  return 0;
}
