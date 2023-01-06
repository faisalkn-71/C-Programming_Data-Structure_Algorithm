#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Please, enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    printf("1st Number = %d", num1);
    printf("\t2nd Number = %d", num2);
    printf("\t3rd Number = %d\n", num3);

    if(num1>num2 && num1>num3){
        printf("1st Number is the greatest number among three.\n");
    }
    else if(num2>num1 && num2>num3){
        printf("2nd Number is the greatest number among three.\n");
    }
    else{
        printf("3rd Number is the greatest number among three.\n");
    }


    return 0;
}
