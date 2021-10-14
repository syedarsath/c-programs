/*
progra NO:43
Date:10/10/2021
Aim:Read a ch and find the given ch is sigle digit or not
*/

#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

if(ch>=48 && ch<=57){

printf("%c is single digit",ch);


}else{

printf("%c is not a single digit",ch);
}
}
