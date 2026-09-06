#include<stdio.h>
#define pi 3.14

int main()
{
  float radius;
  float carea;

  printf("Enter radius:");
  scanf("%f",radius);
  carea=pi*radius*radius;
  printf("AREA OF CIRCLE=\n",carea);
  return 0;
}
