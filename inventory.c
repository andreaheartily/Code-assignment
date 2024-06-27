# include <stdio.h>
#include <stdlib.h>
int main(){
    
   char *item[3]= {"Apples","Squishy","Milk"};
   int quantity,i;
   float price_A=5000.00,price_S=1500.00,price_M=3000.00,Total_price,TpA,TpS,TpM;
   printf("Inventory Management System\n"); 
   printf("\n");

   for (i=1;i>=3;i++)
   {
        printf("%s\n",item[i]);
   }

   //printf("Enter the item: \n");
   //scanf("%s",&item);

   
   for (i=1;i<=3;i++)
   {
    if(i=1)
    {
       printf("Enter quantity: ");
       scanf("%d",&quantity);
       TpA=quantity*price_A;
       printf("The price is %.2f\n",TpA);
            if(i=2)
            {
                printf("Enter quantity: ");
                scanf("%d",&quantity);
                TpS=quantity*price_S;
                printf("The price is %.2f\n",TpS);  
            } 
                    if(i=3)
                    {
                        printf("Enter quantity: ");
                        scanf("%d",&quantity);
                        TpM=quantity*price_M;
                        printf("The price is %.2f\n",TpM);
                    }
    }
   }

   Total_price=(TpA+TpS+TpM);
   printf("The total price of the items is %.2f.",Total_price);
    
    return 0;
}
