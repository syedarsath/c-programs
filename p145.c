/*
Prog:145
*/

#include<stdio.h>
int main(){
int i,j,a[3][3],b[3][3],c[3][3];


printf("Read matrix 1:\n");
for(i=0;i<3;i++){

for(j=0;j<3;j++){

scanf("%d",&a[i][j]);

}
}
printf("___________________\n");
printf("Read matrix 2:\n");
for(i=0;i<3;i++){

for(j=0;j<3;j++){

scanf("%d",&b[i][j]);

}
}

for(i=0;i<3;i++){

for(j=0;j<3;j++){

c[i][j]=a[i][j]+b[i][j];

}
}

printf("___________________\n");

for(i=0;i<3;i++){

for(j=0;j<3;j++){

printf("%d\t",c[i][j]);

}
printf("\n");
}
}
