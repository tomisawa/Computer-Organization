#include <stdio.h>

char *reverse( char *in, char *p)
{
  char *t,c;
  c = *p;
  if(c == '\0') return in ;
  *(t = reverse(in, p + 1)) = c;
  return t + 1 ;
}

int main()
{
  char s[30];
  while (1) {
    printf("\nEnter a string = ");
    scanf("%s",s);
    reverse(s, s);
    printf("Reverse of entered string = %s\n",s);
    reverse(s, s);
    printf("Reverse of entered string = %s\n",s);
 }
}
