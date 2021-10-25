/*
Prog:56
Aim:Find num is even or not between 1-1000
*/

#include<stdio.h>
int main(){
int i;

i=1;

while(i<=1000){

if(i%2==0){

printf("%d is even",i);


}else{

printf("%d is not even",i);

}
i=i+1;
}

}