//214
#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
char ch;
FILE *fp1,*fp2;

fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"w");


if(argc<3){
printf("Wrong Usage");
return 0;
}

if(fp1==NULL || fp2==NULL){

printf("Error");
return 0;
}


while((ch=getc(fp1))!=EOF){


if(ch>65 && ch<90){

ch=ch+32;
putc(ch,fp2);

}else{

putc(ch,fp2);

}
}
fclose(fp1);
fclose(fp2);
}
