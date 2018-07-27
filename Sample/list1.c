#include <stdio.h>

int odd(int n){ return n & 0x1; }
int half(int n){ return n >>1; }

int mult(int r, int x, int y)
{
  if(odd(x))
  {
    r = r + y ;
    if( x== 1) return r;
  }
  return mult(r, half(x), y+y);
}

int main(void)
{
 int x,y;
 while (1)
 {
  printf("\nEnter two positive integer a,b ");
  scanf("%d,%d",&x,&y);
  printf("mult(%d,%d,%d)=%d\n",x,y,0,mult(0,x,y));
  }
}
