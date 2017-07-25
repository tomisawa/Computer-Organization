#include <stdio.h>
#define N 8
int v[N];
int seed = 1;

int modu(int x, int y){
  if (x < y)
    return x;
  return modu(x - y, y);
}

int mulu(int x, int y){
  if (y == 0) return 0;
  return x + mulu(x, y - 1);
}

int rand(){
  seed = modu((mulu(13,seed) +1),100);
  return seed;
}

void initdata(int v[], int n){
  for (int i = 0; i < n; i++)
    v[i] = rand();
}

void printdata(int v[], int n){
  for (int i = 0; i < n; i++)
    printf("\t%d", v[i]);
  puts("\n");
}

void swap(int *x, int *y){
  int t ;
  t = *x ;
  *x = *y ;
  *y = t ;
}

void bsort( int * v , int n ){
  for( int i = 0 ; i < n - 1 ; i++ ){
    for ( int j = 0 ; j < n - 1 ; j++ )
      if ( v[j] > v[j + 1] )
        swap(&v[j],&v[j+1]) ;
  }
}





int main(){
  int n = N;
  while (1) {
    printf("Press RETURN Key\n");
    getchar();
    initdata(v, n);
    printdata(v, n);
    bsort(v, n);
    printdata(v, n);
  }
}
