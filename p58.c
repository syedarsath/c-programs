/*
Prog:58
Aim:Read two number and print the number between the two limits
*/
#include<stdio.h>
int main(){
int firstNumber,secondNumber,i;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);

i=firstNumber;

while(i<=secondNumber){

printf("%d\n",i);

i=i+1;

}
}
