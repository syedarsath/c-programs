/*
Prog no:46
Date:14/10/2021
Aim:read a ch and convert lower into uppercase
*/
#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

if(ch>=97 && ch<=122){

ch=ch-32;

printf("%c",ch);


}else{

printf("%c is not lowercase",ch);
}
}
