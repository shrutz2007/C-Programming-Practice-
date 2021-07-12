#include<stdio.h>
void
main ()
{
  int a[5], s = 0, avg, i;
  printf ("Enter the array element : ");
  for (i = 1; i <= 3; i++)
    {
      scanf ("%d", &a[i]);
    }

  for (i = 1; i <= 3; i++)
    {
      s = s + a[i];
      printf ("%d", a[i]);
    }
  printf ("\n Addition is : %d", s);
  avg = s / 3;
  printf ("\n Average is : %d", avg);
}
