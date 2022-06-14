#include<stdio.h>
int my_atoi(char *s);
void main()
{
  char s[]="1234";
  int b,dec_value,r;  
 //printf("Enter the string\n");
 //printf("%s",s);
 printf("Enter the base\n");
 scanf("%d",&b);
 r=my_atoi(s);
printf("%d ",r);

}
int my_atoi(char *s)
{
  int num,i;
     if((s[i]>='0' && s[i]<='9'))                     //||(*s=='A' && *s=='z')||(*s=='a' && *s=='z'))
      {
       num=num*10+s[i]-48;
      }
     else if(s[i]>='A' && s[i]<='z')
     {
       num=num*10+s[i]-55;
     }
    return num;
}

