/*
Prog No:50
Aim:Read a vowel and find word of the given vowel using switch
*/
#include<stdio.h>
int main(){
char vowel;

scanf("%ch",&vowel);

switch(vowel){


case 'a':printf("axe");break;

case 'e':printf("egg");break;

case 'i':printf("icc");break;

case 'o':printf("ox");break;

case 'u':printf("unique");break;

default:printf("not a vowel");break;

}
}