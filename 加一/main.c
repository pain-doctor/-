#include <stdio.h>
#include <stdlib.h>
#define n 3
int main()
{
    int array[n];
    int i,j;
    if(n!=0&&n!=1){
    for(j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    array[n-1]=array[n-1]+1;
    if(array[n-1]==10){
        array[n-1]=0;
        array[n-2]=array[n-2]+1;
    }
    for(i=0;i<n;i++){
    printf("%d\n",array[i]);
    }
    return 0;
}
else return 0;
}
