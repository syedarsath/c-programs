/*
Pro:85
*/

#include<stdio.h>
int main(){
int i,j,sum,n,a[i][j],b[i][j];
float mean;

i=0;

while(i<3){

j=0;

while(j<3){

scanf("%d",&a[i][j]);
j++;
}
i++;
}

i=0;
sum=0;
n=0;

while(i<3){

j=0;

while(j<3){

sum=sum+a[i][j];
n=n+1;
j++;
}
i++;
}

mean=sum/n;
printf("%f",mean);
}
