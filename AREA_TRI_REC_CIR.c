#include <stdio.h>
#include<math.h>

int main ()
{

  int choice;
  float l, w, ar, ac, r, a, b, c, s, area;
  const float pi = 3.14;


  printf ("Enter 1 to Find Area of Rectangle\n");
  printf ("Enter 2 to Find Area of Circle\n");
  printf ("Enter 3 to Find Area of Triangle\n\n");
  printf ("Enter Your Choice : ");
  scanf ("%d", &choice);
  printf ("\n\n");

  switch (choice)
    {

    case 1:

      printf ("---------Area of Rectangle--------\n\n");
      printf ("\nEnter The Length : ");
      scanf ("%f", &l);
      printf ("Enter The Width : ");
      scanf ("%f", &w);
      ar = l * w;
      printf ("\nArea of Rectangle is : %f", ar);
      break;

    case 2:

      printf ("---------Area of Circle--------\n\n");
      printf ("Enter The Radius : ");
      scanf ("%f", &r);
      ac = pi * r * r;
      printf ("\nArea of Circle is : %f", ac);
      break;

    case 3:

      printf ("---------Area of Triangle--------\n\n");
      printf ("Enter The Sides of Triangle : ");
      scanf ("%f%f%f", &a, &b, &c);
      s = (a + b + c) / 2;
      area = sqrt (s * (s - a) * (s - b) * (s - c));
      printf ("\nArea of Triangle is : %f", area);
      break;

    default:

      printf ("Enter The Valid Choice...!");
      break;

    }


  return 0;
}
