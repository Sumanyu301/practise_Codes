// // // // // #include<stdio.h>
// // // // // #include<math.h>
// // // // // int main()
// // // // // {
// // // // //   int n,a,b,count=0,sum=0,d;
// // // // //   scanf("%d",&n);
// // // // //   b = n;
// // // // //   while(n!=0)
// // // // //   {
// // // // //     n/=10;
// // // // //     count += 1;
// // // // //   }
// // // // //   while(count>0)
// // // // //   {
// // // // //     a=b%10;
// // // // //     d = pow(10,count);
// // // // //     printf("%d\n",d);
// // // // //     sum = sum*10 + a; // update sum
// // // // //     b/=10;
// // // // //     count--;
// // // // //   }
// // // // //   printf("%d",sum);
// // // // // }
// // // // // #include<stdio.h>
// // // // // #include<math.h>
// // // // // int main()
// // // // // {
// // // // //   int n,a,b,count=0,sum=0,d;
// // // // //   scanf("%d",&n);
// // // // //   b = n;
// // // // //   while(n!=0)
// // // // //   {
// // // // //     n/=10;
// // // // //     count += 1;
// // // // //   }
// // // // //   while(count>0)
// // // // //   {
// // // // //     a=b%10;
// // // // //     d = pow(10,count); // calculate power of 10
// // // // //     sum = sum*d + a; // update sum
// // // // //     b/=10;
// // // // //     count--;
// // // // //   }
// // // // //   printf("%d",sum);
// // // // // }

// // // // #include<stdio.h>
// // // // #include<math.h>
// // // // int main()
// // // // {
// // // //   int n,a,b,count=0,sum=0,d;
// // // //   scanf("%d",&n);
// // // //   b = n;
// // // //   while(n!=0)
// // // //   {
// // // //     n/=10;
// // // //     count += 1;
// // // //   }
// // // //   while(count>0)
// // // //   {
// // // //     a=b%10;
// // // //     d = (int)pow(10,count); // cast to int
// // // //     printf("%d\n",d);
// // // //     sum = sum*d + a; // update sum
// // // //     b/=10;
// // // //     count--;
// // // //   }
// // // //   printf("%d",sum);
// // // // }

// // // // #include<stdio.h>
// // // // #include<math.h>
// // // // int main()
// // // // {
// // // //   int n,a,b,count=0,sum=0,d;
// // // //   scanf("%d",&n);
// // // //   b = n;
// // // //   while(n!=0)
// // // //   {
// // // //     n/=10;
// // // //     count += 1;
// // // //   }
// // // //   while(count>0)
// // // //   {
// // // //     a=b%10;
// // // //     count--; // decrement before calling pow
// // // //     d = (int)pow(10,count); // cast to int
// // // //     sum = sum*d + a; // update sum
// // // //     b/=10;

// // // //   }
// // // //   printf("%d",sum);
// // // // }

// // // #include<stdio.h>
// // // #include<math.h>
// // // int main()
// // // {
// // //   int n,a,b,count=0,sum=0,d;
// // //   scanf("%d",&n);
// // //   b = n;
// // //   while(n!=0)
// // //   {
// // //     n/=10;
// // //     count += 1;
// // //   }
// // //   while(count>0)
// // //   {
// // //     a=b%10;
// // //     d = pow(10,count-1); // calculate power of 10
// // //     sum = sum*d + a; // update sum
// // //     b/=10;
// // //     count--; // decrement count
// // //   }
// // //   printf("%d",sum);
// // // }

// // #include<stdio.h>
// // #include<math.h>
// // int main()
// // {
// //   int n,a,b,count=0,sum=0,d;
// //   scanf("%d",&n);
// //   b = n;
// //   while(n!=0)
// //   {
// //     n/=10;
// //     count += 1;
// //   }
// //   while(count>0)
// //   {
// //     a=b%10;
// //     d = pow(10,count); // do not decrement exponent
// //     sum = sum*d + a; // update sum
// //     b/=10;
// //     count--; // decrement count
// //   }
// //   printf("%d",sum);
// // }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//   int n,a,b,count=0,sum=0,d;
//   float v=10;
//   scanf("%d",&n);
//   b = n;
//   while(n!=0)
//   {
//     n/=10;
//     count += 1;
//   }
//   printf("%d\n",count);
//   while(count>0)
//   {
//     a=b%10;
//     d = pow(v,count); // calculate power of 10
//     printf("%d\n",count);
//     printf("%d\n",d);
//     sum = sum*10 + a; // update sum
//     b/=10;
//     count--; // decrement count
//   }
//   printf("%d",sum);
// }
// #include <stdio.h>
// int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (j = 1; j <= i; ++j) {
//          printf("*");
//       }
//       printf("\n");
//    }
//    return 0;
// }


// #include <stdio.h>
// int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//       for (j = 1; j <= i; ++j) {
//          printf("*");
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include<stdio.h>
// main()
// {
//    char x=97;
//    printf("%c",x);
// }

// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 4; i++) {
//         for (int j = 1; j <= 7; j++) {
//             if (j >= i && j <= 7-i+1) {
//                 printf("%d", j == 7-i+1 && i != 4);
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
