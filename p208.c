//208
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

for(scanf("%c",&ch);ch!='$';scanf("%c",&ch)){

fprintf(fp,"%c",ch);
}
fclose(fp);
}