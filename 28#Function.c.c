/******************************************************************************

                            Functions
                Addition of two numbers usig Functions.

*******************************************************************************/

#include<stdio.h>
int add (int a, int b);
void
main ()
{
  int a, b;
  printf ("Ente the value of a and b : ");
  scanf ("%d%d", &a, &b);
  add (a, b);
}

int
add (int a, int b)
{
  int z;
  z = a + b;
  printf ("%d", z);
}
