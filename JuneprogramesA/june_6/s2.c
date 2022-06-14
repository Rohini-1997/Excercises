#include<stdio.h>
void main()
{
  char s[20];
  int i;
  printf("Enter the string\n");
  scanf("%s",s);
  int c=0,*p;
  p=(int*)s;
  for(i=0;p[i];i++);

  printf("length count=%d\n",i);
}
