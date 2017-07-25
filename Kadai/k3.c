#include <stdio.h>

int rmlt(int x, int y, int v) {
  if ( y == 0 ) return v;
  if ( y & 1 )  return rmlt(x<<1, y>>1, v+x);
  return rmlt(x<<1, y>>1, v);
}

int main() {
  int x,y;
  while (1) {
    printf("\nEnter two positive integer a,b ");
    scanf("%d,%d",&x,&y);
    printf("rmlt(%d, %d, %d) = %d\n",x,y,0, rmlt(x,y,0));
  }
}
