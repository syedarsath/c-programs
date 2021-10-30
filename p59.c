/*
Prog:60
Aim:Read two number and find the number is even or odd between two given limits
*/

#include<stdio.h>
int main(){
int firstNumber,secondNumber,i;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);

i=firstNumber;

while(i<=secondNumber){

if(i%2==0){

printf("%d is even\n",i);


}else{

printf("%d is odd\n",i);

}
i=i+1;
}
}