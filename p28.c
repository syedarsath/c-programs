/*
Program no:28
Date:02/10/2021
Aim:Read a number and classify the given numbre is single,two,three or four digit
*/
#include<stdio.h>
int main(){
int number;
 scanf("%d",&number);
 
if(number>=0 && number<=9){
 
 printf("%d is single digit",number);
 

}else if(number>=10 && number<=99){

 printf("%d is two digit",number);
 
 
}else if(number>=100 && number<=999){

 printf("%d is three digit",number);
 
 
}else if(number>= 1000 && number<=9999){

 printf("%d is four digit",number);
 
 
}else{

 printf("%d is more than four digit",number);
 
 }
 }
 
 