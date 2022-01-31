/*
Prog:100
*/

#include<stdio.h>
int main(){
int i,j,m,n;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);
 
while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}

ch[i]='\0';

printf("n=");
scanf("%d",&n);
printf("m=");
scanf("%d",&m);

j=0;
i=m;

while(i<=(m+n)){

b[j]=ch[i];

j++;
i++;
}

b[j]='\0';
j=0;

while(b[j]!='\0'){

printf("%c",b[j]);
j++;

}
}

