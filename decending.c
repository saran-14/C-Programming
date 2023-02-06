#include <stdio.h>
#include<stdlib.h>

int main()
 {
    int n,a[100],temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}
