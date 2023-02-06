#include <stdio.h>
#include<string.h>

int main()
{
char s[1000];
scanf("%s",s);
int l=strlen(s),count=0,countn=0;
for(int i=0;i<l;i++)
{
    if(s[i]=='y')
    {
       count++;
    }
    if(s[i]=='n')
    {
     countn++;   
    }
}
  if(count>countn){
   printf("YES");
   }
  else if(count<countn)
  {
      printf("NO");
  }
  else
  {
    printf("EQUAL");
  }
}
