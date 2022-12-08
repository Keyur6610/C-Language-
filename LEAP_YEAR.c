#include <stdio.h>

int main ()
{
  int y;

  printf ("Enter The Year : ");
  scanf ("%d", &y);

  if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
    {
      printf ("%d is Leap Year", y);
    }
  else
    {
      printf ("%d is Not a Leap Year", y);
    }

  return 0;
}