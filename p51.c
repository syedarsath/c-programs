/*
Prog No:51
Read a vowel and print it in word for both upper and lower case using switch
*/

#include<stdio.h>
int main(){
char vowel;

scanf("%c",&vowel);

switch(vowel){

case 'a':
case 'A':
printf("Axe");break;

case 'e':
case 'E':
printf("Egg");break;

case 'i':
case 'I':
printf("Icc");break;

case 'o':
case 'O':
printf("Ox");break;

case 'u':
case 'U':
printf("Unique");break;

default:printf("not a vowel");break;

}
}
