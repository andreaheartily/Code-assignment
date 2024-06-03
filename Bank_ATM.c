#include <stdio.h>
int main(){
// ATM bank code
double amount, withdraw, deposit, withdraw_total, deposit_total;
amount=500000;
char input;
// input is W,D and B for withdraw, deposit and balance resp
printf("Enter input: \n");
input=getchar();
if('input==W')
{
    printf("Enter withdraw amount: \n");
    scanf("%lf",&withdraw);
    withdraw_total=amount-withdraw;
    printf("Your remaining balance is %lf\n",withdraw_total);
}   
    else
    {
    if('input==D')
    {
        printf("Enter deposit amount: \n");
        scanf("%lf",&deposit);
        deposit_total=amount+deposit;
        printf("Your remaining balance is %lf\n",deposit_total);
    }
        else
        {
         if('input==B')
         {
            printf("Your remaining balance is %lf\n",amount);
         }       
        }
    }        
    return 0;
}