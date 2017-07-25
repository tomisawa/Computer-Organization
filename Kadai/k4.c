#include <stdio.h>

void expr_view(int d, int a[]) {
  if ( d == 0 ) { printf("%+d", a[d]); return; }
  printf("{"); expr_view(d-1, a); printf("}*X%+d", a[d]);
}

int  expr(int d, int a[], int x ) {
  if ( d == 0 ) return a[d];
  return  expr(d-1, a,x)*x +a[d] ;
}

int main() {
  int x,d,a[]= {1, 2, 3, 4, 5};
  while (1) {
    printf("\nEnter two positive integer d,x ");
    scanf("%d,%d",&d,&x);
    printf("\n expr_view(%d,a) :",d); expr_view(d,a);
    printf("\n expr(%d,a,%d)=%d",d,x,expr(d,a,x));
  }
}
