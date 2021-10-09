/*
Program no:15
Date:27/09/2021
Aim:Read fahrenheit and convert to celcius
*/
#include<stdio.h>
int main(){
float f,celcius;

scanf("%f",&f);

celcius=(f-32)*5.0/9;
printf("%f",celcius);
}