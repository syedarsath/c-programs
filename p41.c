/*
Program No:41
Date:10/10/2021
Aim:Read a ch and find the igven ch is upper or lower
*/

#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

if(ch>=65 && ch<=90){

printf("%c is upper",ch);


}else{

printf("%c is not upper",ch);

}
}
