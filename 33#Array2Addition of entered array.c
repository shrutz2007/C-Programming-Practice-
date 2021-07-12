/*Addition of entered array*/

#include<stdio.h>
void
main ()
{
  int i, s = 0, a[5];
  printf ("Enter the array element : ");
  for (i = 1; i <= 4; i++)
    {
      scanf ("%d", &a[i]);
    }

  for (i = 1; i <= 4; i++)
    {
      s = s + a[i];
      printf ("%d", a[i]);
    }
  printf ("\nAddition :  %d", s);
}
