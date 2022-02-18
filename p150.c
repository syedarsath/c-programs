/*
prog:150
*/

#include<stdio.h>
int main(){
int i,j,a[4][4],row,s;

for(i=1;i<=3;i++){
for(j=1;j<=3;j++){

printf("Row %d Column %d :",i,j);
scanf("%d",&a[i][j]);
printf("\n");
}
}

printf("\n");
s=0;
printf("Enter row number to sum:");
scanf("%d",&row);

printf("\n");

if(row>=1 && row<=3){
for(j=1;j<=3;j++){

s=s+a[row][j];

}
}
else{
printf("Enter 1-3");
}


printf("The sum of row %d is %d",row,s);

}


