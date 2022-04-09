//p185

#include<stdio.h>
int main(){


struct bio{

char name[100];
int age;
float salary;

}b;


scanf("%s %d %f",b.name,&b.age,&b.salary);
printf("name:%s\nAge:%d\nSalary:%f",b.name,b.age,b.salary);

}