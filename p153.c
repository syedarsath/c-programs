/*
Prog:154
*/

#include<stdio.h>
int main(){
int i,j,a[4][4],num,c;

for(i=1;i<4;i++){
for(j=1;j<4;j++){

printf("Row%d Column%d:",i,j);
scanf("%d",&a[i][j]);

}
}

c=0;

printf("________________________________________________\n");
printf("Enter number to search:");
scanf("%d",&num);
printf("________________________________________________\n");

for(i=1;i<4;i++){
for(j=1;j<4;j++){

if(num==a[i][j]){

c=c+1;
}
}
}

printf("The given number '%d' exists %d times in the matrix\n",num,c);

}