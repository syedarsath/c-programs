/*
rog:67
Aim:cls the given  char upp,low,single,special char until $ is given
*/

#include<stdio.h>
int main(){
char ch;

scanf("%c",&ch);

while(ch!='$'){

if(ch>=65 && ch<=90){

printf("%c is upppercase",ch);


}else if(ch>=97 && ch<=122){

printf("%c is lowercase",ch);


}else if(ch>=48 && ch<=57){

printf("%c is single digit",ch);

}else{

printf("%c is spec char",ch);

}

scanf("%c",&ch);

}
}