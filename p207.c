#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{

typedef struct bio{

char name[100];
int age;
float sal;

}BIO;

BIO b;
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

while(feof(fp)==0){
fscanf(fp,"%s %d %f",b.name,&b.age,&b.sal);
printf("Name:%s\nAge:%d\nSalary:%f\n",b.name,b.age,b.sal);
}

fclose(fp);

}