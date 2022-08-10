//p186

#include<stdio.h>
int main(){

struct cir{
int r;
float area;
}cir1;

scanf("%d",&cir1.r);
cir1.area=cir1.r*cir1.r*3.14;

printf("%f",cir1.area);


}
