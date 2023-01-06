#include<stdio.h>
int main()
{
    int m, n;
    printf("Please, enter the value of m: ");
    scanf("%d", &m);

    if(m>0){
        printf("The value of n is 1.\n");
    }
    else if(m<0){
        printf("The value of n is -1.\n");
    }
    else{
        printf("The value of n is 0");
    }

    return 0;
}
