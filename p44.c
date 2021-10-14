/*
prog no:44
Date:14/10/2021
Aim:Read a ch and classify the given ch is uppper,lower,digit or special
*/
#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

if(ch>=65 && ch<=90){

printf("%c is upper",ch);


}else if(ch>=97 && ch<=122){

printf("%c is lower",ch);


}else if(ch>=48 && ch<=57){

printf("%c is single digit",ch);


}else{

printf("%c is special char",ch);
}
}