#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],i,no;
    arr[1]=0;
    arr[2]=1;
    printf("Enter the fibonacci number you want:");
    scanf("%d",&no);
    if(no==1 || no==2)
    {
        printf("\n your fib no is: %d",arr[no]);
    }
    else{
    for(i=3;i<=no;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    printf("\n your fib no is: %d",arr[no]);
    }
    return 0;
}
