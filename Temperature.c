#include <stdio.h>
int main(){
    // Conversion of temperature from celcius to fahrenheit
    float celcius_temp, fahrenheit_temp, Kelvin_temp;
    
    printf("Enter the temperature: ");
    scanf("%f",&celcius_temp);
    fahrenheit_temp=(((9/5)*celcius_temp)+32);
    printf("The fahrenheit temperature is %.2f\n",fahrenheit_temp);

    // Conversion of celcius to Kelvin
    Kelvin_temp=(celcius_temp+273.15);
    printf("The Kelvin temperature is %.2f\n",Kelvin_temp);



    



    return 0;
}