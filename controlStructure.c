/*
#include<stdio.h>
void main()
{
    int a,b,c,m,m1;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    m=a>b?a:b;
    m1=m>c?m:c;
    printf("The greatest number among the three numbers:\n%d",m1);

}

#include<stdio.h>
void main()
{
    int y;
    printf("Enter the year:\n");
    scanf("%d",&y);
    ((y%4==0 && y%100!=0)||y%400==0)?printf("Leap Year"):printf("Not a leap year");
}

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter your Alphabet:\n");
    scanf("%c",&ch);
    if((ch>='A'  && ch<='Z')||(ch>='a'  && ch<='z'))
    {
    if ( ch=='A' ||ch=='E' ||ch=='I' || ch=='O' || ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' )
       {
        printf("Vowel");
       }
       else
       printf("Consonants");
    }
    else
    printf("Special Character");
 }

 
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the co-ordinate of a point:\n ");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0)
    {
        printf("First Quadrant");
    }
    else if (x>0 && y<0)
    {
         printf("Second Quadrant");
    }
    else if (x<0 && y<0)
    {
         printf("Third Quadrant");
    }
    else
    {
        printf("Forth Quadrant");
    }

}
   
*/

#include <stdio.h>
void main()
{
    int temp;
    printf("Enter the temp:\n");
    scanf("%d", &temp);
    if (temp < 0)
    {
        printf("Freezing");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("very cold weather");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold Weather");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("Hot");
    }
    else if (temp >= 40)
    {
        printf("Very Hot");
    }
}
