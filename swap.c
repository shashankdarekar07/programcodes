#include<stdio.h>

int main()
{
  int a,b,swap;
  printf("ENTER FIRST & SECOND NUMBER");
  scanf("%d %d",&a,&b);
  printf("BEFORE SWAPPING\n A=%d\n B=%d\n",a,b);
  a=swap;
  b=a;
  swap=b;
  printf("AFTER SWAPPING\n A=%d\n B=%d",a,b);
  return 0;
}
