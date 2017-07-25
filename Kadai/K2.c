#include <stdio.h>

int modu(int x, int y){
  if (x < y) return x ;
  return modu(x-y, y);
}

int gcd(int x, int y){
  if (y==0) return x ;
  return gcd(y, modu(x, y));
}

int main() {
  int x,y;
  while (1) {
    printf("\nx,y ");
    scanf("%d,%d",&x,&y);
    printf("gcd(%d,%d)=%d\n",x,y,gcd(x, y));
  }
}
