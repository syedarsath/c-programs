/*
prog:148
*/

#include<stdio.h>
int main(){
int i,j,a[3][3],s;

for(i=0;i<3;i++){
for(j=0;j<3;j++){

scanf("%d",&a[i][j]);

}
}

s=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){

s=s+a[i][j];

}
}

printf("%d",s);
}