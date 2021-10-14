/*
prog no:45
date:14/10/2021
Aim:Read a char and convert into upper case to lower case
*/
#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

if(ch>=65 && ch<=90){

ch=ch+32;

printf("%c",ch);


}else{

printf("%c is not uppercase",ch);
}
}
