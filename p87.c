/*
Prog:87
*/

#include<stdio.h>
int main(){
int i,j,sum,col,a[3][3];

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
while(i<3){
j=0;
while(j<3){
printf("%d\t",a[i][j]);
j++;
}
printf("\n");
i++;
}

printf("Enter a column you wanna sum:");
scanf("%d",&col);

if(col>=1 && col<=3){

i=0;
sum=0;

while(i<3){

sum=sum+a[i][col-1];
i++;
}
printf("The sum of %dnd column is %d",col,sum);

}else{
printf("Enter 1-3");
}
}