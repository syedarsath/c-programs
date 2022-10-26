#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

int n,i,k,j;
char ch[100],a[i];
FILE *fp;

fp=fopen(argv[1],"r");

if(argc<2){
printf("Wrong Usage");
return 0;
}

if(fp==NULL){

printf("Error");
return 0;
}

i=0;
scanf("%c",&a[i]);

while(a[i]!='$'){

i++;
scanf("%c",&a[i]);

}

a[i]='\0';
n=0;
int l=0;

for(i=0;(ch[i]=getc(fp))!=EOF;i++){

if(ch[i]=='\n'){
ch[i]='\0';


for(i=0;ch[i]!='\0';){

k=i;
j=0;

while(ch[k]==a[j] && a[j]!='\0'){

k++;
j++;
}

if(a[j]=='\0'){

n=n+1;
i=k;
}

else{
i++;
}
printf("Line%d:%d times\n",l,n);
l++;
i=-1;
n=0;
}}}
fclose(fp);
}
