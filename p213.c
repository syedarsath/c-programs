//213
#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
char ch;
FILE *fp1,*fp2,*fp3;

fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"r");
fp3=fopen(argv[3],"w");

if(argc<4){
printf("Wrong Usage");
return 0;
}

if(fp1==NULL){

printf("Error");
return 0;
}


if(fp2==NULL){

printf("Error");
return 0;
}

if(fp3==NULL){

printf("Error");
return 0;
}



while((ch=getc(fp1))!=EOF){

putc(ch,fp3);
}

fclose(fp1);

while((ch=getc(fp2))!=EOF){

putc(ch,fp3);
}


fclose(fp2);
fclose(fp3);

}
