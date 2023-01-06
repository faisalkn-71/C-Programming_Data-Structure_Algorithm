#include<stdio.h>
int main()
{
    int id, unit;
    float charge, amount_charge, sub_charge, net_amount_charge;
    char name[20];

    printf("Please, enter your customer ID: ");
    scanf("%d", &id);

    printf("Please, enter your name: ");
    scanf("%s", &name);

    printf("Please, enter your unit: ");
    scanf("%d", &unit);

    if(unit<200){
        charge = 1.20;
    }

    else if(unit>=200 && unit<400){
        charge = 1.50;
    }

    else if(unit>=400 && unit<600){
        charge = 1.80;
    }

    else{
        charge = 2.00;
    }

    amount_charge = unit * charge;
    if(amount_charge>400){
        sub_charge = amount_charge * 15/100.00;
    }


    net_amount_charge = amount_charge + sub_charge;
    if(net_amount_charge<100){
        net_amount_charge = 100;
    }


    printf("Customer ID No: %d\n", id);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n", unit);
    printf("Amount charges @Rs. %0.2f per unit: %0.2f\n", charge, amount_charge);
    printf("Subcharge Amount: %0.2f\n", sub_charge);
    printf("Net Amount Paid by the Customer: %0.2f\n", net_amount_charge);

    return 0;

}
