// /////   loop.1
// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for ( i = 1; i<=4; i++)
//     {
//         for ( j = i; j <=(2*i-1); j++)
//         {

//             printf("%d",j);
//         }
//         printf("\n");
//     }

// }

////loop.2
// #include<stdio.h>
// void main()
// {
//     int i,j,n;
//     printf("Enter the no of rows:\t");
//     scanf("%d",&n);
//     for ( i = 1; i<=n; i++)
//     {
//         for ( j = i; j <=(2*i-1); j++)
//         {

//             printf("%d",j);
//         }
//         printf("\n");
//     }

// }

// //    loop.3
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for ( i = 1; i <=3; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }

// }

/////   loop.4
// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for ( i = 1; i<=4; i++)
//     {
//         for ( j = i; j <=(2*i-1); j++)
//         {

//             printf("%c",j+64);
//         }
//         printf("\n");
//     }

// }

// /////   loop.5
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for ( i = 5; i>=1; i--)
//     {
//         for ( j=i; j<=5; j++)
//         {

//             printf("%c ",j+64);
//         }
//         printf("\n");
//     }

// }

// /////   loop.14
// #include <stdio.h>

// int main(){
// 	int num,i,j;
// 	    scanf("%d", &num);
// 	printf("Input number is %d\n", num);
// 	      // Writing output to STDOUT
// 	for(i=1; i<=num; i++)
// 	{
// 		printf("*");
// 	}
// 	printf("\n");
// 	for(i=1; i<=num-2; i++)
// 	{
// 		for(j=1; j<=num-i-1; j++)
// 		{
//              printf(" ");

// 		}
// 		 printf("*");
// 		printf("\n");
// 	}
// 	for(i=1; i<=num; i++)
// 	{
// 		printf("*");
// 	}

// }
// // loop.8
// #include<stdio.h>
// void main()
// {
//     int i,j,n,k;
//     printf("Enter the no of rows:\n");
//     scanf("%d",&n);
//     for ( i = 1; i <=n; i++)
//     {
//         for ( k = n-i; k>=1; k--)
//         {
//            printf(" ");
//         }

//         for ( j = 2*i-1; j>=1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// ////   loop.9
// #include<stdio.h>
// void main()
// {
//     int i,j,n,m,k;
//     printf("Enter the no of rows:\n");
//     scanf("%d",&m);
//     n=m/2+1;
//     for ( i = 1; i <=n; i++)
//     {
//         for ( k = n-i; k>=1; k--)
//         {
//            printf(" ");
//         }
//         for ( j = 2*i-1; j>=1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for ( i = n-1; i>=1; i--)
//     {
//         for ( k = n-i; k>=1; k--)
//         {
//            printf(" ");
//         }
//         for ( j = 2*i-1; j>=1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//    loop.11
// #include<stdio.h>
// void main()
// {
//     int i,j,n,k;
//     printf("Enter the no of Row: ");
//     scanf("%d",&n);
//     for ( i = 1; i <=n; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d ",j);
//         }
//         for ( k =2*n-2*i; k>=1; k--)
//         {
//             printf("  ");
//         }

//         for ( j = i; j>=1; j--)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// //loop.14
// #include <stdio.h>

// int main(){
// 	int num,i,j;
// 	    scanf("%d", &num);
// 	printf("Input number is %d\n", num);
// 	      // Writing output to STDOUT
// 	for(i=1; i<=num; i++)
// 	{
// 		printf("*");
// 	}
// 	printf("\n");
// 	for(i=1; i<=num-2; i++)
// 	{
// 		for(j=1; j<=num-i-1; j++)
// 		{
//              printf(" ");
// 		}
// 		 printf("*");
// 		printf("\n");
// 	}
// 	for(i=1; i<=num; i++)
// 	{
// 		printf("*");
// 	}

// }

//   loops.12
// #include <stdio.h>
// void main()
// {
//     int i, j, n,m, k;
//     printf("Enter the no of rows:\n");
//     scanf("%d", &m);
//     n=m-1;
//     for ( i = 1; i <=n+1 ; i++)
//     {
//        printf("%d ",i);
//     }
//     for ( i = n; i >=1 ; i--)
//     {
//        printf("%d ",i);
//     }
//     printf("\n");
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         for (k = 0; k <= 2 * n - 2*i; k++)
//         {
//             printf("  ");
//         }
//         for (j = i; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

// ///   loop.6
// #include<stdio.h>
// void main()
// {
//     int i,j,n,k,m;
//     printf("Enter the no of rows:\n");
//     scanf("%d",&n);
//     for ( i = 1; i<=n; i++)
//     {
//         for ( k =n-i; k>=1; k--)
//         {
//            printf("  ");     ////   first for loop for spaces
//         }
//         for ( j = i; j <=2*i-1; j++)
//         {
//             printf("%d ",j);      ////    second for loop for half right angle triangle
//                                   ////        from the left
//         }
//         for ( j = 2*i-2 ; j >=i; j--)
//         {
//             printf("%d ",j);        ////  third for loop for
//                                    /////right side right angle triangle
//         }
//         printf("\n");
//     }
// }

// //   loop.7
// #include<stdio.h>
// void main()
// {
//     int i,j,n,k,m;
//     printf("Enter the no of rows:\n");
//     scanf("%d",&n);
//     for ( i = 1; i<=n; i++)
//     {
//         for ( k =n-i; k>=1; k--)
//         {
//            printf("  ");
//         }
//         for ( j = i; j >=1; j--)
//         {
//             printf("%d ",j);
//         }
//         for ( j =2 ; j <=i; j++)
//         {
//             printf("%d ",j);
//         }

//         printf("\n");
//     }

// }

////have to do
// #include<stdio.h>
// void main()
// {
//     int i,j,k,n,m;
//     printf("Enter the no of Rows:\n");
//     scanf("%d",&m);
//     n=(m+1)/2;
//     for ( i = n; i>=1; i--)
//     {
//         for ( k =i-1; k <=n-1; k++)
//         {
//             printf(" ");
//         }
//         for ( j=i+1; j>=1; j--)
//         {
//            printf("*");
//         }
//         for ( j=1; j<i-1; j++)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     for ( i = 1; i<=n-1; i++)
//     {
//         for ( k =i-1; k <=n-1; k++)
//         {
//             printf(" ");
//         }
//         for ( j=i; j>=1; j--)
//         {
//            printf("*");
//         }
//         for ( j=1; j<i-1; j++)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
// }

// //// pattern 10
// #include <stdio.h>
// void main()
// {
//     int i, j, n,m, k;
//     printf("Enter the number of row :\n");
//     scanf("%d", &m);
//     n=m/2+1;
//     for (i = n; i >= 1; i--)
//     {
//         for (k = n; k >= i; k--)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i = 2; i <= n; i++)
//     {
//         for (k = n; k >= i; k--)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 18.
#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, k, n;
    char s[10];
    printf("Enter the Word: ");
    gets(s);
    n = strlen(s);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(".");
        }
        for (j = i - 1; j <= n; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}