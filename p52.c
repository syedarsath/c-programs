/*
Prog No:52
Aim:Read a ch and find the given ch is arithmetic operatro or not using switch
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
case '%':
printf("Arithmetic Operator");break;

default:printf("not an arithmetic operator");break;

}
}