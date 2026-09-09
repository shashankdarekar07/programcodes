#include<stdio.h>
int main()
{
  int age;
printf("ENTER YOUR AGE:\n");
scanf("%d",&age);

if(age > 18)
{
printf("\nYOU ARE ELIGIBLE FOR VOTING\n");
}
else 
{
printf("\nYOU ARE NOT ELIGIBLE FOR VOTING\n");
}
return 0;
}
