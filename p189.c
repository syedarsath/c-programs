//189
#include<stdio.h>
int main(){
int i;

struct bio{

char name[100];
int age;
float sal;
};

struct bio b[3];

for(i=0;i<3;i++){

scanf("%s %d %f",b[i].name,&b[i].age,&b[i].sal);

}

for(i=0;i<3;i++){

printf("Name:%s\nAge:%d\nSalary%f\n\n_____________________________________\n",b[i].name,b[i].age,b[i].sal);

}}