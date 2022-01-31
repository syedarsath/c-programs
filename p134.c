/*
Prog:134
*/
#include<stdio.h>
int main(){
int i,sum,a[100];

sum=0;

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

for(i=0;i<10;i++){

sum=sum+a[i];

}
printf("The sum of 10 numbers=%d",sum);
}
