#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number of elements");
    scanf("%d\n",&n);
    int arr[n];
    
    for(int i=0;i<2;i++){
        scanf("%d",&arr[i]);
        sum=sum+(arr[i]);
    }
    printf("the value is %d\n",sum);
}
      
