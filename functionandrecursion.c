#include<stdio.h>

int Mean(int n)
{
  
}
void main()
{
    int m,M,a[20],n;
    printf("Enter the numbers You want to Calculate Mean And Median:\n");
    scanf("%d",&n);
    printf("Input Numbers:n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    m=Mean(n);
    printf("%d",m);
    

}