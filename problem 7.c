#include<stdio.h>

int main()
{
   char str[100],str2[100];
   int i,j=0,x,y;

   puts("Enter a String: ");
   gets(str);

   printf("Enter two index [x-y]: ");
   scanf("%d %d",&x,&y);

   x--; y--;

   for(i=0; i<strlen(str); i++)
   {
     if(i>=x && i<=y)
     {
       str2[j]= str[i];
       j++;
     }
   }
   printf("%s",str2);

   return 0;
}
