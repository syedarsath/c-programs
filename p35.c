/* 
program no:35
Date:03/10/2021
Aim:Read two numbers and ind the biggest  of two numbers
*/

#include<stdio.h>
int main(){

int firstNumber,secondNumber,big;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);


big=(firstNumber>secondNumber)?firstNumber:secondNumber;

printf("%d is big",big);


}