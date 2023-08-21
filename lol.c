//  #include<stdio.h>
// main()
// {
//     printf("Name : Sumanyu Sharma\n");
//     printf("date of birth : september 2004\n");
//     printf("mobile : 1234567890\n");
// }

// #include <stdio.h> 
// int main(int argc, char** argv) {
// #if __STDC_VERSION__ >=  201710L
//   printf("We are using C18!\n");
// #elif __STDC_VERSION__ >= 201112L
//   printf("We are using C11!\n");
// #elif __STDC_VERSION__ >= 199901L
//   printf("We are using C99!\n");
// #else
//   printf("We are using C89/C90!\n");
// #endif
//   return 0;
// }

// main()
// {
//     char a,b,c;
//     scanf("%c %c %c",&a,&b,&c);
//     printf("%c %c %c",c,b,a);
// }

// #include<stdio.h>
// main()
// {
//     int a,b,c;
//     printf("give the length of sides of the rectangle\n");
//     scanf("%d %d",&a,&b);
//     c = 2*(a+b);
//     printf("area of the rectangle is %d and its perimeter is %d",a*b,c);
// }

// #include<stdio.h>
// main()
// {
    
//     int r; //wtf were u doing using int and the using it to print float
//     float a,c;
//     scanf("%d",&r);
//     a = 3.14*r*r;
//     c = 2*3.14*r;
//     printf("the area is %f the circumfrence is %f",a,c);
//     return(0);
// }
// #include <stdio.h> 
// int main() {
//    int radius;
//    float area, perimeter;    
//    radius = 6;

//    perimeter = 2*3.14*radius;
//    printf("Perimeter of the Circle = %f inches\n", perimeter);
	
// 	area = 3.14*radius*radius;
// 	printf("Area of the Circle = %f square inches\n", area);

// return(0);
// }

// #include<stdio.h>
// main()
// {
//     int a,y,c,d,m;
//     scanf("%d",a);
//     y = a/365;
//     c = a%365;
//     m = c/7;
//     d = c%7;
//     printf("year :- %d weeks :- %d days :- %d",y,m,d);
// }

// #include<stdio.h>
// main()
// {
//     int a,b,m;
//     float c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&m);
//     printf("the employ code is %d \n",a);
//     c = b*m;
//     printf("the salry is %.2f\n",c);
// }

// #include<stdio.h>
// #include<math.h>
// main()
// {
//     float x1 = 25 ,x2 = 35 ,y1 = 15,y2 = 10,a,b,c;
//     int x=2;
//     b = x2-x1;
//     c = y2-y1;
//     a = pow(b,x)+pow(c,x);
//     printf("distance %.4f",sqrt(a)); 

// }

// #include<stdio.h>
// main()
// {
//     int b,a,h,m,s;
//     scanf("%d",&b);
//     h = b/3600;
//     a = b%3600;
//     m = a/60;
//     s = a%60;
//     printf("the hour %d minutes %d seconds %d ",h,m,s);
// }

// #include<stdio.h>
// main()
// {
//     int a;
//     scanf("%d",&a);
//     if(a>=0 && a<=20)
//     {
//         printf("range is [0,20]");
//     }
//     else if(a>20 && a<=40)
//     {
//         printf("range is [20,40]");
//     }
//     else
//     {
//         printf("error");
//     }
// }

// #include<stdio.h>
// int main()
// {
//  int x;
//  x = 'a';
//  printf("%d",x);       
// }

// #include<stdio.h>
// main()
// {
//     printf("%%d");
// }

// #include<stdio.h>
// main()
// {
//     int a = 22;
//     char b = 'a';
//     float c = 2.00;
//     printf("%d %c %.2f",a,b,c);
// }

// #include<stdio.h>
// main()
// {
//     int c;
//     char y = 'a';
//     printf("%c",y);
//     c = ord(y); //no ord in c
//     printf("%d",c);
// }

// #include <stdio.h>

// int main(void) {
//     char c = 'a';
//     printf("Character: %c\n", c);
//     printf("ASCII code: %d\n", c);
//     return 0;
// // }

// #include<stdio.h>
// main()
// {
//     char a;
//     scanf("%c",&a);
//     printf("this is the ascii value :-%d\n",a);
// }

// #include<stdio.h>
// main()
// {
//     float a,b,c,d;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     c = b-a;
//     printf("profit is %d\n",c);
//     d = c*100/a;
//     printf("%.1f%%",d);
// }

// #include<stdio.h>
// main()
// {
//     int a,b,c,d,e;
//     printf("enter a three digit number");
//     scanf("%d",&a);
//     b = a/100;
//     c = a%100;
//     d = c/10;
//     e = c%10;
//     printf("number reversed is %d%d%d ",e,b,d);
// }

// #include<stdio.h>
// main()
// {
//     int physics,maths,chemistry,biology,computer;
//     float a,b,c;
//     scanf("%d %d %d %d %d",&physics,&maths,&chemistry,&biology,&computer);
//     a = physics+maths+biology+chemistry+computer;
//     b = a*100;
//     c = b/500;
//     printf("%.2f%%\n",c);
//     if(c>=90)
//     {
//         printf("Grade : A");
//     }
//     else if(c>=80 && c<=90)
//     {
//         printf("Grade : B");
//     }
//     else if(c>=70 && c<=80)
//     {
//         printf("Grade : C");
//     }
//     else
//     {
//         printf("Fail");
//     }
// }

// #include<stdio.h>
// main()
// {
//     float a,b,c,d;
//     scanf("%f %f %f",&a,&b,&c);
//     d = b*b - 4*a*c;
//     if(d>0)
//     {
//         printf("roots are unique and real");
//     }
//     else if(d==0)
//     {
//         printf("roots are real and equal");
//     }
//     else
//     {
//         printf("imaginary roots");
//     }
// }

// #include<stdio.h>
// main()
// {
//     int a;
//     scanf("%d",&a);
//     if(a%4==0)
//     {
//         if(a%100==0)
//         {
//             if(a%400==0)
//             {
//                 printf("leap");
//             }
//             else
//             {
//                 printf("non leap");
//             }
//         }
//         else
//         {
//             printf("leap");
//         }
//     }
//     else
//     {
//         printf("non leap");
//     }
// }



// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (isupper(c)) {
//         printf("The character is an uppercase alphabet.\n");
//     } else if (islower(c)) {
//         printf("The character is a lowercase alphabet.\n");
//     } else if (isdigit(c)) {
//         printf("The character is a digit.\n");
//     } else {
//         printf("The character is a special character.\n");
//     }

//     return 0;
// }

// using switch case
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     switch(c) {
//         case 'A' ... 'Z':
//             printf("The character is an uppercase alphabet.\n");
//             break;
//         case 'a' ... 'z':
//             printf("The character is a lowercase alphabet.\n");
//             break;
//         case '0' ... '9':
//             printf("The character is a digit.\n");
//             break;
//         default:
//             printf("The character is a special character.\n");
//             break;
//     }

//     return 0;
// }

// #include<stdio.h>
// main()
// {
//     int i = 1;
//     while(i<=10)
//     {
//         printf("Sharma\n");
//         i++;
//     }
// }

// #include<stdio.h>
// main()
// {
//     int n,i=1;
//     scanf("%d",&n);
//     while(n>=i)
//     {
//         printf("%d\n",i);
//         i++;
//     }

// }

// #include<stdio.h>
// main()
// {
//     int n,i=0;
//     scanf("%d",&n);
//     while(n>i)
//     {
//         printf("%d\n",n);
//         n--;
//     }
    
// }

// #include<stdio.h>
// main()
// {
//     int n,i=1;
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         if(i%2==0)
//         {
//             printf("even number = %d\n",i);
//         }
//         else
//         {
//             printf("odd number = %d\n",i);
//         }
//         i++;
//     }
// }

// #include<stdio.h>
// main()
// {
//     int n,i=1;
//     scanf("%d",&n);
//     while(n>=i)
//     {
//         printf("%d\n",n*n*n);
//         n--;
//     }
// }

// #include<stdio.h>
// main()
// {
//     int n,i=1,sum=0;
//     scanf("%d",&n);
//     while(n>=i)
//     {
//         if(i%2==0)
//         {
//             sum += i*i;
//         }
//         i++;
//     }   
//     printf("%d",sum);
// }

// #include<stdio.h>
// main()
// {
//     int n,i=2;
//     scanf("%d",&n);
//     while(n-1>=i)
//     {
//         if(n%i==0)
//         {
//             printf("Non Prime\n");
//             break;   
//         }
//         else if(i==n-1)
//         {
//             printf("Prime\n");
//         }
//         i++;
//     }    
//     if(n==2)
//     {
//         printf("Prime");
//     }
//     if(n<=1)
//     {
//         printf("Non Prime");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int n,i=1,fac=1;
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         fac *= i;
//         i++;
//     }
//     printf("%d",fac);
// }

// #include<stdio.h>
// int main()
// {
//     int n,i=1,fac=1;
//     if (scanf("%d",&n) != 1) {
//       printf("Invalid input\n");
//       return 1;
//     }
//     while(i<=n)
//     {
//         fac *= i;
//         i++;
//     }
//     printf("%d",fac);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,count=0;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         n/=10;
//         count+=1;
//     }
//     printf("%d",count);
// }

// #include<stdio.h>
// main()
// {
//     int n,m,a,b,r,c,d,e;
//     scanf("%d %d",&n,&m);
//     a = n;   
//     b = m;
//     while(b!=0)
//     {
//         r= a%b;
//         a=b;
//         b=r;
//     }
//     e = a;
//     c = n*m;
//     d = c/e;
//     printf("the LCM is %d",d);
// }


// #include <stdio.h>
// int main(void) {
//   int a, b;
//   printf("Enter two integers: ");
//   scanf("%d %d", &a, &b);

//   int lcm = (a * b) / gcd(a, b);

//   printf("LCM: %d", lcm);

//   return 0;
// }

// int gcd(int a, int b) {
//   while (b != 0) {
//     int r = a % b;
//     a = b;
//     b = r;
//   }
//   return a;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//   int n,a,b,count=0,sum=0,d;
//   scanf("%d",&n);
//   b = n;
//   while(n!=0)
//   {
//     n/=10;
//     count += 1;
//   }
//   while(count>=1)
//   {
//     a=b%10;
//     printf("%d\n",a);
//     d = pow(10,count-1);
//     printf(" pow %d\n",d);
//     sum += a*pow(10,count);
//     b/=10;
//     count--;
//   }
//   printf("%d",sum);
// }

// #include<stdio.h>
// main()
// {
//     int a=1,b=1,c=0,n,i;
//     scanf("%d",&n);
//     printf("%d ",a);
//     printf("%d",b);
//     for(i=1;i<=n;i++)
//     {
//       c = a+b;
//       a=b;
//       b=c;
//       printf(" %d",c);
//     }
// }

// #include<stdio.h>
// main()
// {
//   int n,m,i;
//   scanf("%d",&n);
//   scanf("%d",&m);
//   for(i=2;i<=n;i++)
//   {
//     if(n==0)
//     {
//       break;
//     }
//     else if(n%i==0)
//     {
//       n/=i;
//       printf("%d ",i);
//       i--;
//     }
//     else
//     {
//       ;
//     }
//   }
//   printf("\n");
//     for(i=2;i<=m;i++)
//   {
//     if(m==0)
//     {
//       break;
//     }
//     else if(m%i==0)
//     {
//       m/=i;
//       printf("%d ",i);
//       i--;
//     }
//     else
//     {
//       ;
//     }
//   }
// }


// #include<stdio.h>
// main()
// {
//   int a,b,r;
//   scanf("%d",&a);
//   scanf("%d",&b);
//   while(b!=0)
//   {
//     if(a>b)
//     {
//       r=a%b;
//       if(r!=0)
//       {
//         a=b;
//         b=r;
//       }
//       else
//       {
//         printf("%d",b);
//         break;
//       }
//     }
//     if(a<b)
//     {
//       r=b%a;
//       if(r!=0)
//       {
//         b=a;
//         a=r;
//       }
//       else
//       {
//         printf("%d",a);
//         break;
//       }
//     }
//   }
// }

// #include<stdio.h>

// int main() {
//   int a, b, r;
//   printf("Enter two numbers: ");
//   scanf("%d\n", &a);
//   scanf("%d\n", &b);

//   while (r != 0) 
//     if (a > b) {
//       r = a % b;
//       if (r != 0) {
//         a = b;
//         b = r;
//       } else {
//         printf("%d", b);
//         break;
//       }
//     }
//     if (a < b) {
//       r = b % a;
//       if (r != 0) {
//         b = a;
//         a = r;
//       } else {
//         printf("%d", a);
//         break;
//       }
//     }
//   }
//   return 0;
// }


// #include<stdio.h>
// main()
// {
//   int i,n,j;
//   scanf("%d",&n);
//   for(i=1;n>=i;n--)
//   {
//       for(j=1;j<=n;j++)
//         {
//           printf("*");
//         }
//         printf("\n"); 
//   }
// }


// #include<stdio.h>
// main()
// {
//     int i,n,j,a,b;
//   scanf("%d",&n);
//   a=n;
//   for(i=1;n>=i;n--)
//   {
//       for(j=1;j<=n;j++)
//         {
//           // printf("%d",n);
//           // printf("%d",j);
//           printf("#");
//         }
//         printf("\n"); 
//   }
// }

// #include<stdio.h>
// main()
// {
//   int n,i,j;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     for(j=1;j<=n;j++)
//     {
//       if(j>=(n+1)-i)
//       {
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// main()
// {
//   int i,j,n;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     for(j=1;j<=n;j++)
//     {
//       if(j<=i)
//       {
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }


// #include<stdio.h>
// main()
// {
//   int i,j,n,a;
//   scanf("%d",&n);
//   a=n;
//   for(i=n;i>=1;--i)
//   {
//     for(j=1;j<=i;++j)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// main()
// {
//   int i,j,n;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     for(j=1;j<=2*n-1;j++)
//     {
//       if(j>=(n+1)-i && j<=(n-1)+i)
//       {
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }

//  #include<stdio.h>
//  main()
//  {
//   int i,j,n,k=1;
//   scanf("%d",&n);
//   for(i=1;i<=n;++i)
//   {
//     for(j=1;j<=2*n-1;++j)
//     {
//       if(j>=(n+1)-i && j<=(n-1)+i && k)
//       {
//         printf("*");
//         k=0;
//       }
//       else
//       {
//         printf(" ");
//         k=1;
//       }
//     }
//     printf("\n");
//   }
//  }

// #include<stdio.h>
// main()
// {
//   int i,j,n,k;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     for(j=1;j<=2*n-1;j++)
//     {
//       if(j<=(n+1)-i || j>=(n-1)+i)
//       {
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// main()
// {
//   int i,j,n,k,l,m;
//   char a='*';
//   scanf("%d",&n);
//   for (i=1;i<=n;i++)
//   {
//     for(j=1;j<=n;j++)
//     {
//       if(j<=(n+1)-i)
//       {
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     if(i==1)
//     {
//       for(k=1;k<=n;k++)
//       {
//         printf("*");
//       }
//     }
//     for(l=1;l<=n-1;l++)
//     {
//       for(m=1;m<=n-1;m++)
//       {
//         if(m>=l)
//         {
//           printf("*");
//         }
//         else
//         {
//           printf(" ");
//         }
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }

// }

// #include<stdio.h>
// main()
// {
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//          k=1;
//         for(j=1;j<=n*2-1;j++)
//         {
//             if(j>=(n+1)-i && j<=(n-1)+i)
//             {
//                 printf("%d",k);
//                 j<n?k++:k--;
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// main()
// {
//     int a,i,j,n,x;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         x=65;
//         for(j=1;j<=n;j++)
//         {
//             if(j<=(n+1)-i)
//             {
//                 printf("%c",x);
//                 x++;
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// main()
// {
//     int n,i,j,k;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         k=64;
//         for(j=1;j<=n*2-1;j++)
//         {
//             if(j>=i && j<=(n*2)-i)
//             {
//                 j<=n?k++:k--;
//                 printf("%c",k);
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// main()
// {
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if()
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int  main()
// {
//     int n;
//     scanf("%d",&n);
//     switch(n)
//     {
//         case 1:
//         printf("31 Jan");
//         break;
//         case 2:
//         printf("28 feb");
//         break;
//         case 3:
//         printf("31 march");
//         break;
//         case 4:
//         printf("30 april");
//         break;
//         case 5:
//         printf("31 may");
//         break;
//         default:
//         printf("enter a valid month");
//     }
// }


// #include<stdio.h>
// main()
// {
//     int a,b,c,i;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("1 for checking equilateral\n2 for checking isoceles\n3 for checking right angle");
//     scanf("%d",&i);
//     switch(i)
//     {
//         case 1:
//         if(a==b&&b==c&&a==c)
//         {
//             printf("equi");
//         }
//         else
//         {
//             printf("false");
//         }
//         case 2:
//         if(a==b||b==c||a==c)
//         {
//             printf("iso");
//         }
//         else
//         {
//             printf("False iso");
//         }
//             break;
//         case 3:
//         if(a>b && a>c)
//         {
//             if(a*a==b*b+c*c)
//             {
//                 printf("right");
//             }
//             else
//             {
//                 printf("false right");
//             }
//         }
//         else if(b>a && b>c)
//         {
//             if(b*b == a*a+c*c)
//             {
//                 printf("right");
//             }
//             else
//             {
//                 printf("false right");
//             }
//         }
//         else if(c>a && c>b)
//         {
//             if(c*c==a*a+b*b)
//             {
//                 printf("right");
//             }
//             else
//             {
//                 printf("not right");
//             }
//         }
//         else
//         {
//             printf("not right");
//         }
//     }
// }


// #include<stdio.h>
// main()
// {
//     int a,i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n*2-1;j++)
//         {
//             if(j>=i && j<=(n*2)-i)
//             {
//                 if(j==i||j==(n*2)-i)
//                 {
//                     printf("1");
//                 }
//                 else
//                 {
//                     printf("0");
//                 }
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// main()
// {
//     int i,j,n,k;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         i<=(n+1)/2?(k=i):(k=(n+1)-i);
//         for(j=1;j<=n;j++)
//         {
//             if(j>=(n-1)-k && j<=((n+1)/2-1)+k)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int* sort(int s[],int n)
// {
//     int i;
//     int j;
//     int temp;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(s[i]<s[j])
//             {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     return s;   
// }

// int main()
// {
//     int n,i,j;
//     int *y;
//     scanf("%d",&n);
//     int s[n] ;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&s[i]);
//     }
//     y = sort(s,n);
//     for(j=0;j<n;j++)
//     {
//         printf("%d ",*(y+j));
//     }
//     return 0;
// }

// #include<stdio.h>
// #include <math.h>

// double equation_1(double u, double a, double t)
// {
//     return u + (a*t);
// }
// double equation_2(double u, double a, double t) 
// {
//     return (u*t) + (0.5*a*t*t);
// }
// double equation_3(double a, double b, double c) 
// {
//     return (2*a) + sqrt(b) + (9*c);
// }
// double equation_4(double b, double p) 
// {
//     return sqrt(b*b + p*p);
// }

// int main()
// {
    
//     double u,ac,t;
//     printf("Give u,ac,t\n");
//     scanf("%lf %lf %lf",&u,&ac,&t);

//     double result = equation_1(u, ac, t);
//     printf("%lf\n", result);
//     //1st// 
//     result = equation_2(u, ac, t);
//     printf("%lf\n", result);
//     //2nd//
//     double a,b,c;
//     printf("Give a,b,c\n");
//     scanf("%lf %lf %lf",&a,&b,&c);
//     result = equation_3(a, b, c);
//     printf("%lf\n", result);
//     //3rd//
//     b = 3;
//     double p = 4;
//     result = equation_4(b, p);
//     printf("%lf\n", result);
//     //4th//
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Give two numbers ");
//     scanf("%d %d",&a,&b);
//     c = a;
//     a = b;
//     b = c;
//     printf("first = %d second = %d",a,b);
// }

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     printf("Give two numbers ");
//     scanf("%d %d",&a,&b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("first = %d second = %d",a,b);
// }

