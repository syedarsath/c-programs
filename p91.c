/*
Prog:91
*/

#include<stdio.h>
int main(){
int i,j,num,c,a[3][3];


i=0;
while(i<3){

j=0;
while(j<3){
 
scanf("%d",&a[i][j]);
j++;
}
i++;
}

printf("Enter number you wanna count in given matrix:");
scanf("%d",&num);
i=0;
c=0;

while(i<3){

j=0;
while(j<3){

if(num==a[i][j]){
c=c+1;
j++;
}
else{
j++;
}
}
i++;
}
printf("%d times the given number exist in given matrix.\n",c);
}
