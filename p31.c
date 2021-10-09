/*
Program no:31
Date:03/10/2021
Aim:Read number and find given number is even or not by implicit check
*/

#include<stdio.h>
int main(){
int number,x;

scanf("%d",&number);

x=number%2;

if(x){

printf("%d not is even",number);


}else{

printf("%d is even",number);

}
}

