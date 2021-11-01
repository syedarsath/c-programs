/*
prog:62
Aim:Classify given num is postive,negative and zero until -1000 is given
*/

#include<stdio.h>
int main(){
int number;

scanf("%d",&number);

while(number!=-1000){

if(number>0){

printf("%d is postive",number);


}else if(number<0){

printf("%d is negative",number);


}else{

printf("%d is zero",number);

}
scanf("%d",&number);

}
}