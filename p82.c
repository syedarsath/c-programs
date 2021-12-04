/*
prog 82
*/

#include<stdio.h>
int main(){
int i,j,k,a[3][3],b[3][3],c[3][3];

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
scanf("%d",&b[i][j]);
j++;
}
i++;
}

i=0;
while(i<3){
j=0;
while(j<3){
c[i][j]=0;
k=0;
while(k<3){

c[i][j]=c[i][j]+a[i][k]*b[k][j];
k++;
}
j++;
}
i++;
}

i=0;
while(i<3){
j=0;
while(j<3){
printf("%d\t",c[i][j]);
j++;
}
printf("\n");
i++;
}
}