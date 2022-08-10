//197

#include<stdio.h>
#include<math.h>
int main(){

typedef struct point{

int x,y;

}POINT;

POINT p1,p2;
float dis;


scanf("%d %d",&p1.x,&p1.y);
scanf("%d %d",&p2.x,&p2.y);

dis=sqrt((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y));

printf("%f",dis);
}