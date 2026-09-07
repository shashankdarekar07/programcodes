#include <stdio.h>
int main() 
{
    int age;
    float percentage;
    char grade;
    char name[50];
    
    printf("Enter your first name: ");
    scanf("%s", name);  
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    printf("Enter your final grade: ");
    scanf(" %c", &grade);
    

    printf("Name:        %s\n", name);
    printf("Age:         %d years old\n", age);
    printf("percentage:  %.2f\n", percentage);
    printf("Grade:       %c\n", grade);

    return 0;
}
