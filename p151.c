/*
Prog:151
*/

#include<stdio.h>
int main(){
int i,j,a[4][4],col,s;

for(i=1;i<4;i++){
for(j=1;j<4;j++){

printf("Row%d Column%d:",i,j);
scanf("%d",&a[i][j]);
}
}

s=0;

printf("________________________________\n");
printf("Enter column number to sum:");
scanf("%d",&col);
printf("________________________________\n");

if(col>=1 && col<=3){

for(i=1;i<4;i++){

s=s+a[i][col];

}
}else{

printf("Please enter column number between 1-3");

}

printf("The sum of given column is %d",s);
printf("\n");
}
