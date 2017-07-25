#include <stdio.h>

int modu(int x, int y){
  if (x < y) return x ;
  return modu(x-y, y);
}

int main() {
  int x,y;
  while (1) {
    printf("\nx,y ");
    scanf("%d,%d",&x,&y);
    printf("modu(%d,%d)=%d\n",x,y,modu(x, y));
  }
}
