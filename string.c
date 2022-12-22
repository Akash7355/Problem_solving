#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter the String:");
    gets(s);
    int i = 0, c = 0;
    while (s[i] != '\0')
    {
        c++;
        i++;
    }
//    for (i=c; i>=0; i--)
//    {
//         printf("%c",s[i]);
//    }
   
   i=c;
   while (i>=0)
   {
      printf("%c",s[i]);
      i--;
   }
   
    
}
