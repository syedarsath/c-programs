/*
Prog:113
*/

#include<stdio.h>
int main(){
int i,j,l,k,n,b[100];
char ch[100],c[000];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}

ch[i]='\0';
i=0;
j=0;
b[j]=i;
l=1;
j++;

while(ch[i]!='\0'){

  if(ch[i]=='\n'){
  
  b[j]=i+1;
  i++;
  j++;
  l++;
  
  }else{
  
  i++;
  
  }
  }

b[j]=-1;
printf("How many last n lines you wanna print,n=");
scanf("%d",&n);
i=b[l-n];
k=0;

while(ch[i]!='\0'){

c[k]=ch[i];
i++;
k++;

}

c[k]='\0';
k=0;

printf("the last %d lines are:\n",n);

while(c[k]!='\0'){

printf("%c",c[k]);
k++;

}
}