# include <stdio.h>

int main ()
{
    
    printf("A Program that calculates the average monthly temperature.\n");
    printf("\n");

    float temp [30] ;
    float average, sum;

    for (int i=0; i<30; i++)
    {
        printf("Enter the temperature in degrees celcius: ");
        scanf("%f",&temp[i]);
    }

    sum = 0;
    for (int i=0; i<30; i++)
    {
        sum += temp[i];
    }

    average = sum/30;

    printf("The average monthly temperature is %.2f.\n",average);
    
    return 0;
}