#include<stdio.h>
int main(){
int i,n,*ptr,*ptr1;
ptr=(int*)malloc(10*sizeof(int));
printf("%d%d",ptr,sizeof(ptr));
ptr1=(int*)calloc(1,sizeof(int));
printf("%d%d",ptr1,sizeof(ptr1));
}

output
104908648105132808

