#include<stdio.h>
int main()
{
    char sign;

    printf("Please, enter anything what you want: ");
    scanf("%c", &sign);

    if((sign>='a' && sign<='z') || (sign>='A' && sign<='Z')){
        printf("This is an alphabet.\n");
    }
    else if(sign>='0' && sign<='9'){
        printf("This is a digit.");
    }
    else{
        printf("This is a special Character.\n");
    }
    return 0;
}
