/*
Prog:86
*/

#include<stdio.h>
int main(){
int i,j,a[3][3],sum,row;

i=0;
while(i<3){

j=0;

while(j<3){
scanf("%d",&a[i][j]);
j++;
}
i++;
}
printf("Enter an row you wanna sum:");
scanf("%d",&row);

if(row>=1 && row<=3) {

j=0;
sum=0;

while(j<3){

sum=sum+a[row-1][j];
j++;

}
}else{
printf("Enter 1-3");
}
printf("sum of %dnd row is:%d",row,sum);
}
