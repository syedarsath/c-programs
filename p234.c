#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
union biodata
{
struct bio
{
char name[100];
int age;
float sal;
}a;
char b[sizeof(struct bio)];
};
union biodata m;
float pf,hra;
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
int n;
printf("Enter which record you want to edit:");
scanf("%d",&n);
int offset=(n-1)*sizeof(struct bio);
fseek(fp,offset,0);


for(int i=0;i<sizeof(struct bio);i++){
m.b[i]=getc(fp);
}

printf("----------------------Old Record--------------------------\nName:%s\nAge:%d\nSalary:%f\n________________________________\n",m.a.name,m.a.age,m.a.sal);
printf("Edit record:\n");

fseek(fp,offset,0);
scanf("%s %d %f",m.a.name,&m.a.age,&m.a.sal);
int flag;
for(int i=0;i<sizeof(struct bio);i++){
putc(m.b[i],fp);
flag=0;
}
if(flag==0){
printf("Record Edited sucessfully\n");
}
fclose(fp);
}
