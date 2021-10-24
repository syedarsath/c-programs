/*
Prog:53
Aim:Read a ch and classify the give ch is arithmetic,Logical,bitwise or assignment operator
*/

#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

switch(ch){

case '+':
case '-':
case '*':
case '/':

printf("Arithmetic operator");break;


case '<':
case '>':

printf("Logical Operator");break;


case '&':
case '|':
case '^':
case '~':

printf("Bitwise Operator");break;


case '=':

printf("Assignment operator");break;


default:


printf("Not an operator");break;
}
}
