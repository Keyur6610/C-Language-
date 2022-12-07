#include <stdio.h>

int
main ()
{
  int a;
  int square, cube;

  printf ("Enter The Valve Of a : ");
  scanf ("%d", &a);

  square = a * a;
  cube = a * a * a;

  printf ("\nSquare is : %d", square);
  printf ("\nCube is : %d", cube);


  return 0;
}

