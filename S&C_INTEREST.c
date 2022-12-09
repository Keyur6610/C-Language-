// Simple Interest and Compound Interest 

#include <stdio.h>
#include <math.h>

int main ()
{
  float p, r, t, A, si, ci;

  printf ("-------Simple Interest-------\n\n");
  printf ("Enter The Principal Amount : ");
  scanf ("%f", &p);
  printf ("Enter The Rate of interest : ");
  scanf ("%f", &r);
  printf ("Enter The Time : ");
  scanf ("%f", &t);

  si = (p * r * t) / 100;
  A = p + si;

  printf ("\nSimple Interest is : %f", si);
  printf ("\nTotal Amount is : %f", A);


  A = p * pow ((1 + r / 100), t);
  ci = A - p;

  printf ("\n\n-------Compound Interest-------");
  printf ("\n\nCompound Interest is : %f", ci);
  printf ("\nTotal Amount is : %f", A);



  return 0;
}
