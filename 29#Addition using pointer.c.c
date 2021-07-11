/* Addition using pointer*/

#include<stdio.h>
void
main ()
{
  int a, b, c, *p, *q, *k;
  printf ("Enter the value of a and b :");
  scanf ("%d%d", &a, &b);
  p = &a;
  q = &b;
  c = *p + *q;
  k = &c;
  printf ("Addition using pointer is %d", *k);
}
