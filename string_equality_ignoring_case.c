#include<stdio.h>
#include<stdlib.h>

int main()
{
 char s[1001],k[1010];
  scanf("%s %s",s,k);
   int l=strlen(s);
  for(int i=0;i<l;i++)
  {
    if(s[i]!=tolower(k[i]) && s[i]!=toupper(k[i]) && s[i]!=k[i])
    {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
