#include <stdio.h>

int main ()
{

  int arr[10] = { 100, 200, 300, 40, 50, 60, 700, 800, 90, 10 };
  int i, max;

  max = arr[0];


  for (i = 0; i < 10; i++)

    {
      if (arr[i] > max)
	{
	  max = arr[i];
	}

    }

  printf ("Maximum Number is : %d", max);
  return 0;
}
