#include <stdio.h>

int main () {

    int arr[3],a,sum=0;
    
    for (int i=0;i<=5;i++){
        printf("enter the num:-");
        scanf("%d",&a);
        arr[i]=a;
        sum+=arr[i];

    }
printf("sum=%d\n",sum);




    return 0;

}