#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x,y;

    printf("enter 1st no ");
    scanf("%d",&x);

    printf("enter 2st no ");
    scanf("%d",&y);

    printf("before swaping : x = %d , y = %d\n",x,y);

    swap(&x,&y);

    printf("after swapping : x = %d,y = %d\n",x,y);

    return 0;
}
