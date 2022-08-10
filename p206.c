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

fp=fopen(argv[1],"w");


if(argc<2){
printf("Wrong Usage");
return 0;
}

if(fp==NULL){

printf("Error");
return 0;

}
int i=0;

for(scanf("%s",b.name);b.name[0]!='$';scanf("%s",b.name)){
scanf("%d %f",&b.age,&b.sal);
fprintf(fp,"Name:%s\nAge:%d\nSalary:%f",b.name,b.age,b.sal);
}
fclose(fp);
}
