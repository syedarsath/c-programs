/*
program no:14
Date:27/09/2021
Aim:Read radius and height and find the volume of cylinder
*/
#include<stdio.h>
int main(){
float pi,r,h,Volume;

scanf("%f",&r);
scanf("%f",&h);

pi=3.14;
Volume=pi*r*r*h;
printf("%f",Volume);
}