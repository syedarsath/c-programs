//217
#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

int i;
char ch[100];
FILE *fp;

fp=fopen(argv[1],"w");

if(argc<2){
printf("Wrong Usage");
return 0;
}

if(fp==NULL){

printf("Error");
return 0;
}


for(i=0;(ch[i]=getchar())!='$';i++);

ch[i]='\0';

for(i=0;ch[i]!='\0';i++){
putc(ch[i],fp);
}

fclose(fp);
}
