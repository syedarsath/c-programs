/*
Program no:37
Date:04/10/2021
Aim:Read three numbers and find the biggest of three numbers using ternary operator
*/

#include<stdio.h>
int main(){
int firstNumber,secondNumber,thirdNumber,big,big1;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);
scanf("%d",&thirdNumber);

big=(firstNumber>secondNumber)?firstNumber:secondNumber;
big1=(big>thirdNumber)? big:thirdNumber;

printf("%d id big",big1);
}

