/*
program no:36
date:03/10/2021
Aim:Read two number and find the smallest of two number
*/

#include<stdio.h>
int main(){
int firstNumber,secondNumber,sml;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);

sml=(firstNumber<secondNumber)?firstNumber:secondNumber;

printf("%d is sml",sml);

}

