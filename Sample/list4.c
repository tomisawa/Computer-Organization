#include <stdio.h>
#define MAXN 120
#define BITS (sizeof(int) * 8)
#define FLAGS_SIZE (MAXN / BITS + 1)

int flags[FLAGS_SIZE] = {};

void setflag(int i) {
  flags[i / BITS] |= 1 << (i % BITS);
}

int getflag(int i) {
  return (flags[i / BITS] >> (i % BITS)) & 1;
}

int sieve() {
  int i, j, count = 0;
  for (i = 2; i <= MAXN; i++) {
    if (getflag(i) == 0) {
      ++count;
      for (j = i +  i ; j <= MAXN; j += i) setflag(j);
     }
    }
    return count ;
}

int main(void)
{
  int i;
  printf("The number of prime numbers＝%d\n", sieve());
  for(i = 2; i <= MAXN ; i++)
    if(!getflag(i)) printf("%d\t",i );
  printf("\n");
}
