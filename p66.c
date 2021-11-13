/*
Prog:66
Aim:Read and print the char until '$' if given
*/

#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

while(ch!='$'){

printf("%c",ch);
scanf("%c",&ch);
}
}