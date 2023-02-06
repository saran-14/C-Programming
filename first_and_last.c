#include <stdio.h>
#include<stdlib.h>

int main() {
    int n,x,j=0,a[100];
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n/x;i++)
    {
        a[j]=x*i;
        j++;
    }
    for(int i=0;i<j/2;i++)
    {
        printf("%d %d ",a[i],a[j-1-i]);
    }
    if(j%2!=0)
    {
        printf("%d",a[j/2]);
    }

    return 0;
}
