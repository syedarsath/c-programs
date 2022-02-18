/*
Prog:152
*/

#include<stdio.h>
int main(){
int flag,i,j,a[4][4],num;
for(i=1;i<4;i++){
for(j=1;j<4;j++){

printf("Row%d Column%d:",i,j);
scanf("%d",&a[i][j]);
}
}
printf("__________________________________________\n");

printf("Enter number to search:");
scanf("%d",&num);

flag=0;

for(i=1;i<4;i++){
for(j=1;j<4;j++){

if(num==a[i][j]){

flag=1;

}
}
}

printf("__________________________________________\n");

if(flag==1){

printf("The number '%d' is exists in the matrix\n",num);

}else{

printf("The number '%d' does'nt exists in the matrix\n",num);

}
}
