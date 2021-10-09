/*
Program no:33
Date:03/10/2021
Aim:Read a number and find the given number is even or not by negation operator
*/

#include<stdio.h>
int main(){
int number,x;

scanf("%d",&number);

x=number%2;

if(!x){

printf("%d is even",number);


}else{

printf("%d is not even",number);

}
}
