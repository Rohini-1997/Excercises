#include<stdio.h>
void main()
{
  
  int r,c,i,j;
  printf("Enter the number of rows and column\n");
  scanf("%d%d",&r,&c);
  int a[r][c];
  printf("Enter the Array elements\n");
  for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
       {
         scanf("%d",&a[i][j]);
       }
    }
     printf("printing the array elements\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
            printf("%d ",a[i][j]);
          }
        printf("\n");
      
       }
     printf("After transpose....\n");
     for(i=0;i<r;i++)
      {
       for(j=0;j<c;j++)
        {
           printf("%d ",a[j][i]);
         }
       printf("\n");

  
}
 
}
