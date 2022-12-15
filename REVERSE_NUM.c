#include <stdio.h>

int main ()
{
    
  int rev_num = 0;
  int n;

  printf ("----------Reverse Number----------\n\n");
  printf ("Enter The Number : ");
  scanf ("%d", &n);

  while (n > 0)
    {

      rev_num = rev_num * 10 + n % 10;
      n = n / 10;

    }

  printf ("Reversed Number : %d", rev_num);


  return 0;
}
