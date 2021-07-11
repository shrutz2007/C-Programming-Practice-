/* Swapping using pointer*/

#include<stdio.h>
void
main ()
{
  int a, b, t, *i, *j, *k;
  printf ("Enter the value of a and b : ");
  scanf ("%d%d", &a, &b);
  i = &a;
  j = &b;
  t = *i;
  *i = *j;
  *j = t;
  printf ("Swapped values are a=%d and b=%d", *i, *j);
}
