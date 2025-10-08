#include<stdio.h>

int main()
{
    int marks;
    printf("\nEnter marks (0-100) : ");
    scanf("\n%d",&marks);
    if (marks >100 || marks < 0){
    printf("\nNot exist");
    } else if(marks >=90){
    printf("\nthe grade is : A\n");
    } else if (marks>=80){
    printf("\nThe grade is : B\n");
    } else if (marks>=70){
    printf("\nThe grade is : C\n");
    } else if(marks>=60){
    printf("\nThe grade is : D\n");
    } else { 
    printf("\nfail");
    }
    return 0;
}