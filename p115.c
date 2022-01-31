/*
Prog:115
*/

#include<stdio.h>
int main(){
int i,j,k,n;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}

printf("____________________________\n");
ch[i]='\0';
i=0;

printf("Enter the pattern:");
scanf("%c",&b[i]);

while(b[i]!='$'){

i++;
scanf("%c",&b[i]);

}
b[i]='\0';
i=0;
n=0;

while(ch[i]!='\0'){

k=i;
j=0;

while(ch[k]==b[j] && b[j]!='\0'){

j++;
k++;

}

if(b[j]=='\0'){

n=n+1;
i=k;

}else{

i++;

}
}

printf("\n");
printf("_____________________________\n");
printf("The pattern exists %d times\n",n);
printf("_____________________________\n");
}
