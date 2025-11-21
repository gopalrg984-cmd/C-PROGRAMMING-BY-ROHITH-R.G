#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,distance;
    printf("enter the value of :x1y1\n");
    scanf("%d%d",&x1 ,&y2);
    printf("enter the value of :x2y2\n");
    scanf("%d%d",&x2 ,&y2);
    
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("distance= %.2d",distance);
}
