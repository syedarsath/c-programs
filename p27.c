/*
Program no:27
DAte:02/10/2021
Aim:Read number and find the given number is two digit or not
*/
#include<stdio.h>
int main(){
int number;
 
 scanf("%d",&number);
 
if(number>=10 && number<=99){

 printf("%d is two digit",number);

}else{
 printf("%d is not two digit number",number);
 }
}
