/*
prog 81
*/

#include<stdio.h>
int main(){
int i,j,a[3][3],b[3][3],c[3][3];

i=0;
while(i<3){
j=0;
while(j<3){

scanf("%d",&a[i][j]);
j=j+1;
}
i=i+1;
}
i=0;
while(i<3){
j=0;
while(j<3){

scanf("%d",&b[i][j]);
j=j+1;
}
i=i+1;
}

i=0;
while(i<3){
j=0;
while(j<3){

c[i][j]=a[i][j]+b[i][j];
j=j+1;
}
i=i+1;
}

i=0;
while(i<3){
j=0;
while(j<3){

printf("%d\t",c[i][j]);
j=j+1;
}
printf("\n");
i=i+1;
}
}