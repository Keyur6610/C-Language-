#include <stdio.h>

int
main ()
{
  int physics, maths, chemistry, english, computer;
  int total, percentage;

  printf ("Enter The Physics Marks : ");
  scanf ("%d", &physics);
  printf ("Enter The Chemistry Marks : ");
  scanf ("%d", &chemistry);
  printf ("Enter The Maths Marks : ");
  scanf ("%d", &maths);
  printf ("Enter The English Marks : ");
  scanf ("%d", &english);
  printf ("Enter The Computer Marks : ");
  scanf ("%d", &computer);

  total = physics + chemistry + maths + english + computer;
  percentage = total / 5;

  printf ("\n");
  printf ("Your Percentage is : %d", percentage);
  printf ("\n");

  if (percentage > 75)
    {
      printf ("Distinction");
    }

  else if (percentage <= 75 && percentage > 60)
    {
      printf ("First Class");
    }
  else if (percentage <= 60 && percentage > 50)
    {
      printf ("Second Class");
    }
  else if (percentage <= 50 && percentage > 35)
    {
      printf ("Pass Class");
    }
  else
    {
      printf ("You are Fail");
    }

  return 0;
}
