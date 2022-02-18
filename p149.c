/*
prog:149
*/

#include<stdio.h>
int main(){
int i,j,c,a[3][3],s;
float mean;

for(i=0;i<3;i++){
for(j=0;j<3;j++){

scanf("%d",&a[i][j]);

}
}

s=0;
c=0;

for(i=0;i<3;i++){
for(j=0;j<3;j++){

s=s+a[i][j];
c=c+1;

}
}

mean=s/c;

printf("%f",mean);
}


