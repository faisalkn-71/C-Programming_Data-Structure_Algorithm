#include<stdio.h>
int main()
{
    int A, B;
    printf("Please, enter two numbers: ");
    scanf("%d%d", &A, &B);

    if(A>B){
        printf("A is bigger.\n");
    }
    else if(B>A){
        printf("B is bigger.\n");
    }

    else{
        printf("A and B both are equal.\n");
    }

    return 0;
}
