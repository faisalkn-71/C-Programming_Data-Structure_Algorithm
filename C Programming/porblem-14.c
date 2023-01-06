#include<stdio.h>
int main()
{
    char alphabet;

    printf("Please, enter an alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U'){
        printf("The alphabet is a vowel.\n");
    }
    else if(alphabet>='a' && alphabet<='z' || alphabet>='A' && alphabet<='Z'){
        printf("The alphabet is a consonent.\n");
    }

    else{
        printf("This is not an alphabet.\n");
    }

    return 0;
}
