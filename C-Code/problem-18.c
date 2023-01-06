#include<stdio.h>
int main()
{
    int A, B, C;
    printf("Please, enter three numbers: ");
    scanf("%d%d%d", &A, &B, &C);

    if(A>B && A>C){
        printf("A is bigger.\n");
    }

    else if(B>A && B>C){
        printf("B  is bigger.\n");
    }

    else if(C>A && C>B){
        printf("C is bigger.\n");

    }

    else if(A==B && A>C){
        printf("A and B both are bigger.\n");
    }

    else if(B==C && B>A){
        printf("B and C both are bigger.\n");
    }

    else if(C==A && C>B){
        printf("A and C both are bigger.\n");
    }

    else{
        printf("A, B and C are equal.\n");
    }


    return 0;
}
