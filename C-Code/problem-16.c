#include<stdio.h>
int main()
{
    int day_count;

    printf("Please, enter any number between 1 to 7: ");
    scanf("%d", &day_count);


    if(day_count == 1){
        printf("Saturday\n");
    }
    else if(day_count == 2){
        printf("Sunday\n");
    }
    else if(day_count == 3){
        printf("Monday\n");
    }
    else if(day_count == 4){
        printf("Tuesday\n");
    }
    else if(day_count == 5){
        printf("Wednesday\n");
    }
    else if(day_count == 6){
        printf("Thursday\n");
    }
    else if(day_count == 7){
        printf("Friday\n");
    }
    else{
        printf("OPSS! You give me the wrong input.");
    }
    return 0;

}
