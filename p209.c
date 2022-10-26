//209
#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
char ch;
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


while((ch=getchar())!='$'){

putc(ch,fp);
}

fclose(fp);
}
