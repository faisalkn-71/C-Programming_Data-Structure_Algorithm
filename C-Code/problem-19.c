#include<stdio.h>
int main()
{
    int integer;
    printf("Please, enter any non-negative number: ");
    scanf("%d", &integer);

    if(integer%2==0){
        printf("This is an even number.\n");
    }
    else{
        printf("This is an odd number.\n");
    }



    return 0;
}
