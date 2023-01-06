#include<stdio.h>
int main()
{
    int  marks;
    printf("Please, enter your marks: ");
    scanf("%d", &marks);


    if(marks>0 && marks<=32){
        printf("Opss! You are failed and you grad is F\n");
    }
    else  if(marks>=33 && marks<=39){
        printf("Your grad is D.\n");
    }
    else if(marks>=40 && marks<=49){
        printf("Your grad is C.\n");
    }

    else if(marks>=50 && marks<=59){
        printf("Your grad is B.\n");
    }
    else if(marks>=60 && marks<=69){
        printf("Your grad is A-.\n");
    }
    else if(marks>=70 && marks<=79){
        printf("Your grad is A.\n");
    }
    else if(marks>=80 && marks<=100){
        printf("Congratulations! You got A+.\n");
    }
    else{
        printf("You give me the wrong input.\n");
    }

    return 0;
}
