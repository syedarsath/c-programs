/*
Pog:116
*/

#include<stdio.h>
int main(){
int i,j,k,m;
char ch[100],b[100],c[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){


i++;
scanf("%c",&ch[i]);

}
ch[i]='\0';
i=0;
printf("_________________________________________\n");
printf("Enter the pattern you wanna delete:");

scanf("%c",&b[i]);

while(b[i]!='$'){


i++;
scanf("%c",&b[i]);
m=0;

}
b[i]='\0';
i=0;

while(ch[i]!='\0'){

k=i;
j=0;

while(ch[k]==b[j] && b[j]!='\0'){

j++;
k++;

}

if(b[j]=='\0'){

i=k;

}else{

c[m]=ch[i];
m++;
i++;

}
}

c[m]='\0';
m=0;

printf("__________________________________________\n");

while(c[m]!='\0'){

printf("%c",c[m]);
m++;

}
}