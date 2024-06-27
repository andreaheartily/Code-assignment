# include <stdio.h>
int main(){
    
   int quantity,total,week;
   printf("Inventory of Squishy\n"); 
   printf("\n");
   printf("Enter the quantity: \n");
   scanf("%d",&quantity);
   total=1500*quantity;

   printf("Enter week: \n");
   scanf("%d",&week);
   switch(week){
        case 1:
            printf("Enter the quantity: \n");
            scanf("%d",&quantity);
            total=1500*quantity;
            printf("The expense is %d.\n",total);
            break;
        case 2:
        printf("Enter the quantity: \n");
        scanf("%d",&quantity);
        total=1500*quantity;
            printf("The expense is %d.\n",total);
            break;
        case 3:
        printf("Enter the quantity: \n");
        scanf("%d",&quantity);
        total=1500*quantity;
            printf("The expense is %d.\n",total);
            break;
        case 4:
        printf("Enter the quantity: \n");
        scanf("%d",&quantity);
        total=1500*quantity;
            printf("The expense is %d.\n",total);
            break;
        default:
            printf("Invalid week.\n");
   }
    
    return 0;
}