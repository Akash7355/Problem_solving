

// // 1--- 1!+2!+3!+4!+...............
// #include <stdio.h>
// void main()
// {
//     int i, n, sum = 0, fact = 1;
//     printf("Enter the n:\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         fact*= i;
//         sum += fact;
//     }
//     printf("sum is %d ",sum);
// }?

// /// 2---    1!/1+2!/2+3!/3+...........
// #include <stdio.h>
// void main()
// {
//     int i, n, fact = 1;
//     int  sum = 0;
//     printf("Enter the n:\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         fact *= i;
//         sum += fact / i;
//     }
//     printf("%d ", sum);
// }

// // 3--- 1+ x + x2/2! + x3/3! + x4/4!......
// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     int i, n, x, fact = 1;
//     int sum = 1;
//     printf("Enter the value of n:\n");
//     scanf("%d", &n);
//     printf("Enter the value of x:\n");
//     scanf("%d", &x);
//     for (i = 1; i < n; i++)
//     {
//         fact = fact * i;
//         sum = sum + pow(x, i) / fact;
//     }
//     printf("%d", sum);
// }

// // 4--- 1- x + x2/2! - x3/3! + x4/4!......
// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     int i, n, x,d=1, fact = 1;
//     int sum = 1;
//     printf("Enter the power n:\n");
//     scanf("%d", &n);
//     printf("Enter the value of x:\n");
//     scanf("%d", &x);
//     for (i = 1; i < n; i++)
//     {
//         fact = fact * i;
//         sum = sum + d*pow(x, i) / fact;
//         d=-d;
//     }
//     printf("%d", sum);
// }

// //8--- 1*2*3+2*3*4+3*4*5+-------
// #include <stdio.h>
// void main()
// {
//     int i,n;
//     int sum=0;
//     printf("Enter the value of n:\n");
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         sum+=i*(i+1)*(i+2);
//     }
//     printf("Sum of the Series is:\n%d",sum);
// }

// // 5.
// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     int i,n,x, d = 1, fact = 1;
//     float sum = 0;
//     printf("Enter the power:\n");
//     scanf("%d", &n);
//     printf("Enter the value of x:\n");
//     scanf("%d", &x);
//     for (i = 1; i <= n; i++)
//     {
//         fact *= i;
//         if (i % 2 != 0)
//         {
//             sum += (d * pow(x, i)) / fact;
//             d = -d;
//         }
//     }
//     printf("%f", sum);
// }


// // 6.
// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     int i,n,x, d =-1, fact = 1;
//     float sum = 1;
//     printf("Enter the power:\n");
//     scanf("%d", &n);
//     printf("Enter the value of x:\n");
//     scanf("%d", &x);
//     for (i = 1; i <= n; i++)
//     {
//         fact *= i;
//         if (i % 2 == 0)
//         {
//             sum += (d * pow(x, i)) / fact;
//             d = -d;
//         }
//     }
//     printf("%f", sum);
// }


//// 7.
#include<stdio.h>
int main()
{
    int i,n,d=1,m,fact=1;
    float sum=0.00;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for ( i = 1; i <=(2*n-1); i++)
    {
       fact*=i;
       if (i%2!=0)
       {
        m=(i+1)/2;
          sum =sum+d*m/fact;
          d=-d;
       }
    }
     printf("The Sum is : %f ",sum);
}