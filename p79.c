/*
prog:79
*/

#include<stdio.h>
int main(){
int i,num,n,a[i];

i=0;

while(i<10){

scanf("%d",&a[i]);
i++;
}

i=0;
n=0;
scanf("%d",&num);
 
while(i<10){

if(num==a[i]){

n=n+1;
i++;

}else{

i++;

}
}

printf("%d times given num exists in the given array",n);
}