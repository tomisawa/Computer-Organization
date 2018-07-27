#include <stdio.h>

int catalan(int n) {
  int s = 0;
  int k;
  if ( n == 0 ) { return 1; }
  for ( k = 0; k <= n-1; k++ )
  {
    s += catalan(k) * catalan(n-1-k);
  }
  return s;
}

int main(void)
{
  int n;
  while (1)
  {
    printf("\nEnter two positive integer n ");
    scanf("%d",&n);
    printf("catalan of %d = %d\n",n, catalan(n));
  }
}
