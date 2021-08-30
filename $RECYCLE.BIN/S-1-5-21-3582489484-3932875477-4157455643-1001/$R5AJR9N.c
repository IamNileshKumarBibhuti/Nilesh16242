// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int **a, r, c, i, j;
//     scanf("%d", &r);
//     scanf("%d", &c);

//     a = (int **)malloc(r * sizeof(int *));
//     for (i = 0; i < r; i++)
//         *(a + i) = (int *)malloc(c * sizeof(int));
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", *(a + i) + j);
//         }
//     }

//     i = 0;
//     int sum1 = 0;
//     for (j = 0; j < c; j++)
//         sum1 = sum1 + *(*(a + i) + j);

//     i = r - 1;
//     int sum2 = 0;
//     if (i != 0)
//     {
//         for (j = 0; j < c; j++)
//             sum2 = sum2 + *(*(a + i) + j);
//     }

//     j = 0;
//     int sum3 = 0;
//     for (i = 1; i < r - 1; i++)
//         sum3 = sum3 + *(*(a + i) + j);

//     j = c - 1;
//     int sum4 = 0;
//     for (i = 1; i < r - 1; i++)
//         sum4 = sum4 + *(*(a + i) + j);

//     printf("Sum of boundary is % d", sum1 + sum2 + sum3 + sum4);
//     return 0;
// }

//////**************************************************************************

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define max(x,y) x>y?x:y
// #define min(x,y) x<y?x:y
// // Return the number of items can be
// // produced in temp sec.
// int findItems(int arr[], int n, int temp)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//         ans += (temp / arr[i]);
//     return ans;
// }

// // Binary search to find minimum time required
// // to produce M items.
// int bs(int arr[], int n, int m, int high)
// {
//     int low = 1;

//     // Doing binary search to find minimum
//     // time.
//     while (low < high)
//     {
//         // Finding the middle value.
//         int mid = (low + high) >> 1;

//         // Calculate number of items to
//         // be produce in mid sec.
//         int itm = findItems(arr, n, mid);

//         // If items produce is less than
//         // required, set low = mid + 1.
//         if (itm < m)
//             low = mid + 1;

//         //  Else set high = mid.
//         else
//             high = mid;
//     }

//     return high;
// }

// // Return the minimum time required to
// // produce m items with given machine.
// int minTime(int arr[], int n, int m)
// {
//     int maxval = INT_MIN;

//     // Finding the maximum time in the array.
//     for (int i = 0; i < n; i++)
//         maxval = max(maxval, arr[i]);

//     return bs(arr, n, m, maxval * m);
// }

// // Driven Program
// int main()
// {
//     int arr[] = {3 ,6 ,9 ,12 ,15 ,13};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int m = 2;

//     printf("%d" ,minTime(arr, n, m));

//     return 0;
// }

/////////////*********************************************************************

//////https://www.hackerearth.com/submission/4871915/
// #include <stdio.h>
// #include <stdbool.h>
// #include <malloc.h>
// #include <string.h>

// const int N = 1e5 + 5;
// #define li long long int
// li a[100], sum;
// int n, m;

// bool f(li mid)
// {
//     li tme = 1;
//     li sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += a[i];
//         if (sum > mid)
//         {
//             i--;
//             sum = 0;
//             tme++;
//         }
//         if (tme > m)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// li solve()
// {
//     li start = 1, end = sum;
//     while (start < end)
//     {
//         li mid = (start + end) >> 1;
//         if (f(mid))
//         {
//             end = mid;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return start;
// }

// int main()
// {
//     scanf("%d %d", &n, &m);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%lld", a + i);
//         sum += a[i];
//     }
//     printf("%lld\n", solve());
//     return 0;
// }

////////////////*********************************************************************

// ////https://www.codechef.com/problems/FLYMODE
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     long long int h[100001], max = 0, j;
//     int i;
//     int n;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%lld", &h[i]);
//         if (h[i] > max)
//         {
//             max = h[i];
//         }
//     }
//     long long int *s;

//     s = (long long int *)malloc(sizeof(long long int) * max);
//     for (i = 0; i < max; i++)
//     {
//         s[i] = 0;
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         if (h[i] > h[i + 1])
//         {
//             for (j = h[i + 1]; j < h[i]; j++)
//             {
//                 s[j]++;
//             }
//         }
//         if (h[i] < h[i + 1])
//         {
//             for (j = h[i]; j < h[i + 1]; j++)
//             {
//                 s[j]++;
//             }
//         }
//     }
//     long long int k = 0;
//     for (j = 0; j < max; j++)
//     {
//         if (s[j] > k)
//             k = s[j];
//     }
//     printf("%lld\n", k);
//     return 0;
// }

/////*************************************************************************************8

////// https://www.shangmayuan.com/a/4cda828c63df4adbb81f1dab.html
// #include <stdio.h>
// #include <stdbool.h>
// #include <malloc.h>
// #include <string.h>

// int main()
// {
//     int n, m;
//     while (scanf("%d%d", &n, &m) != EOF)
//     {
//         int a[105];
//         memset(a, 0, sizeof(a));
//         while (n--)
//         {
//             int x;
//             scanf("%d", &x);
//             for (int i = 1; i <= x; i++)
//             {
//                 int y;
//                 scanf("%d", &y);
//                 a[y] = 1;
//             }
//         }
//         bool flag = true;
//         for (int i = 1; i <= m; i++)
//         {
//             if (!a[i])
//                 flag = false;
//         }
//         if (flag)
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
//     return 0;
// }

//////******************************************************************************************************

// //// https://www.codechef.com/viewsolution/47867372
// #include <string.h>
// int main()
// {
//     char s[26];
//     int n, i;
//     scanf("%s", s);
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         char w[12];
//         int j, k, l, c = 0;
//         scanf("%s", w);
//         l = strlen(w);
//         for (j = 0; w[j] != '\0'; j++)
//         {
//             for (k = 0; s[k] != '\0'; k++)
//             {
//                 if (w[j] == s[k])
//                 {
//                     c++;
//                     break;
//                 }
//             }
//         }
//         if (c == l)
//             printf("Yes\n");
//         else
//             printf("No\n");
//     }
// }

////////////////////////***********************************************************************************

/////https://www.codechef.com/viewsolution/47871934
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, i, c = 0, d = 0;
//         scanf("%d", &n);
//         char s[100], r[100];
//         scanf("%s%s", s, r);
//         for (i = 0; i < n; i++)
//         {
//             if (s[i] == '1')
//                 c++;
//             if (r[i] == '1')
//                 d++;
//         }
//         if (c == d)
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
//     return 0;
// }

/////// *******************************************************************

/////////https://www.codechef.com/viewsolution/47871874

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         char S[100000];
//         scanf("%s", S);
//         char C[26] = {0};
//         int x, i;
//         int X[26];
//         for (i = 0; S[i] != '\0'; i++)
//         {
//             x = S[i] - 'a';
//             C[x]++;
//         }
//         int count = 0, j = 0;
//         for (i = 0; i < 26; i++)
//         {
//             if (C[i] != 0)
//             {
//                 X[j] = C[i];
//                 count++;
//                 j++;
//             }
//         }
//         if (count < 3)
//         {
//             printf("Dynamic\n");
//             continue;
//         }
//         int round, temp, flag;
//         for (round = 1; round <= count - 1; round++)
//         {
//             flag = 0;
//             for (i = 0; i <= count - 1 - round; i++)
//             {
//                 if (X[i] > X[i + 1])
//                 {
//                     flag = 1;
//                     temp = X[i];
//                     X[i] = X[i + 1];
//                     X[i + 1] = temp;
//                 }
//             }
//             if (flag == 0)
//                 break;
//         }
//         int y = 0;
//         for (i = count - 1; i < count; i++)
//         {
//             if (X[i] != X[i - 1] + X[i - 2])
//             {
//                 y = 1;
//                 break;
//             }
//         }
//         if (y == 1)
//         {
//             printf("Not\n");
//             flag = 1;
//         }
//         else
//             printf("Dynamic\n");
//     }
//     return 0;
// }

//////////////////*********************************************************************************************

////// https://www.sanfoundry.com/c-program-convert-binary-octal/

// #include <stdio.h>

// int main()
// {
//     long int binarynum, octalnum = 0, j = 1, remainder;

//     printf("Enter the value for  binary number: ");
//     scanf("%ld", &binarynum);
//     while (binarynum != 0)
//     {
//         remainder = binarynum % 10;
//         octalnum = octalnum + remainder * j;
//         j = j * 2;
//         binarynum = binarynum / 10;
//     }
//     printf("Equivalent octal value: %lo", octalnum);
//     return 0;
// }

//////////////************************************************************************

////////https://www.codingconnect.net/c-program-check-given-string-pangram/
// #include <stdio.h>
// char s[100];
// int i, used[26] = {0}, total = 0;
// #define bro(x) if('a' <= s[x] && s[x] <= 'z')
// #define ord(x) else if ('A' <= s[x] && s[x] <= 'Z')
// void main()
// {

//     printf("\n Enter the String:\n");
//     // lol(s);
//     scanf("%[^\n]%*c", s); //// is when you have input a sentence with space.
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         bro(i)
//         {
//             total += !used[s[i] - 'a'];
//             used[s[i] - 'a'] = 1;
//         }
//         ord(i)
//         {
//             total += !used[s[i] - 'A'];
//             used[s[i] - 'A'] = 1;
//         }
//     }

//     if (total == 26)
//     {
//         printf("\n The Entered String is a Pangram String.");
//     }
//     else
//     {
//         printf("\n The Entered String is not a Pangram String.");
//     }
// }

/////////////////////////*************************************************************************

/////https://codeforwin.org/2016/03/c-program-to-find-sum-of-array-elements-using-recursion.html

// #include <stdio.h>
// #define MAX_SIZE 100

// /* Function declaration to find sum of array */
// int sum(int arr[], int start, int len);

// int main()
// {
//     int arr[MAX_SIZE];
//     int N, i, sumofarray;

//     /* Input size and elements in array  */
//     printf("Enter size of the array: ");
//     scanf("%d", &N);
//     printf("Enter elements in the array: ");
//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     sumofarray = sum(arr, 0, N);
//     printf("Sum of array elements: %d", sumofarray);

//     return 0;
// }

// /**
//  * Recursively find the sum of elements in an array.
//  */
// int sum(int arr[], int start, int len)
// {
//     /* Recursion base condition */
//     if (start >= len)
//         return 0;

//     return (arr[start] + sum(arr, start + 1, len));
// }

//////////***************************************************************************************************88

/////https://www.geeksforgeeks.org/sum-digit-number-using-recursion/
// #include <stdio.h>

// // Function to check sum of digit using recursion
// int sum_of_digit(int n)
// {
//     if (n == 0)
//         return 0;
//     return (n % 10 + sum_of_digit(n / 10));
// }

// // Driven Program to check above
// int main()
// {
//     int num;
//     scanf("%d" ,&num);
//     int result = sum_of_digit(num);
//     printf("Sum of digits in %d is %d\n", num, result);
//     return 0;
// }

//////////****************************************************************************

/////// https://prepinsta.com/c-program/replace-all-0s-with-1-in-a-given-integer/
// #include <stdio.h>
// #include <stdbool.h>
// #include <malloc.h>
// #include <string.h>
// int replace(long int num)
// {
//     // Base case for recursion termination
//     if (num == 0)
//         return 0;
//     // Extract the last digit and change it if needed
//     int digit = num % 10;
//     if (digit == 0)
//         digit = 7;
//     // Convert remaining digits and append the last digit

//     return replace(num / 10) * 10 + digit;
// }
// int Convert(long int num)
// {
//     if (num == 0)
//         return 1;
//     else
//         return replace(num);
// }
// int main()
// {
//     long int num;
//     //To take user input
//     printf("\nInsert the num : ");
//     scanf("%d", &num);
//     //display final result
//     printf("\n Num after replacement : %d\n", Convert(num));
//     return 0;
// }

//////////////////////////////////////*********************************************************************************************

// #include <stdio.h>
// #include <math.h>
// void is_armstrong(int x ,int number)
// {
//     int i = x, sum = 0, rem = 0, n = 0, p = 0, q = 0;
//     for (i = x; i <= number; i++)
//     {
//         p = i;
//         q = i;
//         while (p != 0)
//         {
//             p = p / 10;
//             n++;
//         }
//         while (q > 0)
//         {
//             rem = q%10;
//             sum += pow(rem, n);
//             q = q / 10;
//         }
//         if (sum == i)
//             printf("%d ", sum);
//         p = 0;
//         q = 0;
//         n = 0;
//         sum = 0;
//     }
// }
// int main()
// {
//     int x ,y;
//     scanf("%d %d", &x ,&y);
//     is_armstrong(x ,y);
//     return 0;
// }

/////////////////////////************************************************************
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int arr[100][2], m[100], f[100], x, y, nm = 0, nf = 0, t, k = 0, l = 0, temp;
//     printf("enter number of inputs.");
//     scanf("%d", &t);

//     for (x = 0; x <= 99; x++)
//     {
//         m[x] = -999;
//         f[x] = -999;
//     }

//     for (x = 0; x < t; x++)
//     {
//         for (y = 0; y < 2; y++)
//         {
//             scanf("%d", &arr[x][y]);
//             //calculating males.
//         }
//         if (arr[x][0] == 0)
//         {
//             f[k] = arr[x][1];
//             k++;
//             nf++;
//         }
//         else
//         {
//             m[l] = arr[x][1];
//             l++;
//             nm++;
//         }
//     }
//     //now we have taken the inputs.
//     //found the number of males and females.
//     //now we have to sort the array on the first column.
//     //sorting female array
//     for (x = 1; x < nf; x++) //to sort data
//     {
//         for (y = x; y < nf; y++)
//         {

//             if (f[x - 1] < f[y])
//             {
//                 temp = f[x - 1];
//                 f[x - 1] = f[y];
//                 f[y] = temp;
//             }
//         }
//     }

//     for (x = 0; x < nf; x++)
//     {
//         printf(" %d=>", f[x]);
//     }
//     for (x = 1; x < nm; x++) //to sort data
//     {
//         for (y = x; y < nm; y++)
//         {

//             if (m[x - 1] < m[y])
//             {
//                 temp = m[x - 1];
//                 m[x - 1] = m[y];
//                 m[y] = temp;
//                 printf("\n");
//                 for (int p = 0; p < nm; p++)
//                     printf("%d", m[p]);
//             }
//         }
//     }

//     for (x = 0; x < nm; x++)
//     {
//         printf(" %d=>", m[x]);
//     }
//     getch();
//     return (0);
// }

//////////////////////******************************************************************************************

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// /* A function that prints given number in words */
// void convert_to_words(char *num)
// {
//     int len = strlen(num); // Get number of digits in given number

//     /* Base cases */
//     if (len == 0)
//     {
//         fprintf(stderr, "empty string\n");
//         return;
//     }
//     if (len > 4)
//     {
//         fprintf(stderr,"Length more than 4 is not supported\n");
//         return;
//     }

//     /* The first string is not used, it is to make
//         array indexing simple */
//     char *single_digits[] = {"zero", "one", "two", "three", "four",
//                              "five", "six", "seven", "eight", "nine"};

//     /* The first string is not used, it is to make
//         array indexing simple */
//     char *two_digits[] = {"", "ten", "eleven", "twelve",
//                           "thirteen", "fourteen", "fifteen", "sixteen",
//                           "seventeen", "eighteen", "nineteen"};

//     /* The first two string are not used, they are to make
//         array indexing simple*/
//     char *tens_multiple[] = {"", "", "twenty",
//                              "thirty", "forty", "fifty",
//                              "sixty", "seventy", "eighty",
//                              "ninety"};

//     char *tens_power[] = {"hundred", "thousand"};

//     /* Used for debugging purpose only */
//     printf("\n%s: ", num);

//     /* For single digit number */
//     if (len == 1)
//     {
//         printf("%s\n", single_digits[*num - '0']);
//         return;
//     }

//     /* Iterate while num is not '\0' */
//     while (*num != '\0')
//     {

//         /* Code path for first 2 digits */
//         if (len >= 3)
//         {
//             if (*num - '0' != 0)
//             {
//                 printf("%s ", single_digits[*num - '0']);
//                 printf("%s ",
//                        tens_power[len - 3]); // here len can
//                                              // be 3 or 4
//             }
//             --len;
//         }

//         /* Code path for last 2 digits */
//         else
//         {
//             /* Need to explicitly handle 10-19. Sum of the
//             two digits is used as index of "two_digits"
//             array of strings */
//             if (*num == '1')
//             {
//                 int sum = *num - '0' + *(num + 1) - '0';
//                 printf("%s\n", two_digits[sum]);
//                 return;
//             }

//             /* Need to explicitely handle 20 */
//             else if (*num == '2' && *(num + 1) == '0')
//             {
//                 printf("twenty\n");
//                 return;
//             }

//             /* Rest of the two digit numbers i.e., 21 to 99
//              */
//             else
//             {
//                 int i = *num - '0';
//                 printf("and %s ", i ? tens_multiple[i] : "");
//                 ++num;
//                 if (*num != '0')
//                     printf("%s ", single_digits[*num - '0']);
//             }
//         }
//         ++num;
//     }
// }

// /* Driver program to test above function */
// int main(void)
// {
//     char num[100];
//     scanf("%s" ,&num);
//     convert_to_words(num);
//     return 0;
// }

//////////////////***********************************************************************************************

// ////////https://www.programiz.com/c-programming/examples/negative-positive-zero
// #include <stdio.h>
// int main()
// {
//     double num;
//     printf("Enter a number: ");
//     scanf("%lf", &num);
//     if (num <= 0.0)
//     {
//         if (num == 0.0)
//             printf("You entered 0.");
//         else
//             printf("You entered a negative number.");
//     }
//     else
//         printf("You entered a positive number.");
//     return 0;
// }

///////////////////********************************************************************************

//////////// https://www.programiz.com/c-programming/examples/inch-feet-structure
// #include <stdio.h>

// struct Distance
// {
//     int feet;
//     float inch;
// } d1, d2, result;

// int main()
// {
//     // take first distance input
//     printf("Enter 1st distance\n");
//     printf("Enter feet: ");
//     scanf("%d", &d1.feet);
//     printf("Enter inch: ");
//     scanf("%f", &d1.inch);

//     // take second distance input
//     printf("\nEnter 2nd distance\n");
//     printf("Enter feet: ");
//     scanf("%d", &d2.feet);
//     printf("Enter inch: ");
//     scanf("%f", &d2.inch);

//     // adding distances
//     result.feet = d1.feet + d2.feet;
//     result.inch = d1.inch + d2.inch;

//     // convert inches to feet if greater than 12
//     while (result.inch >= 12.0)
//     {
//         result.inch = result.inch - 12.0;
//         ++result.feet;
//     }
//     printf("\nSum of distances = %d -%.2f", result.feet, result.inch);
//     return 0;
// }

//////////////////////******************************************************************88

///// https://www.programiz.com/c-programming/examples/inch-feet-structure
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define ll long long

// bool count(char s[])
// {
//     ll a = 0, b = 0;
//     int n = strlen(s);
//     for (ll i = 0; i < n; i++)
//     {
//         if (s[i] == 'A')
//             a++;
//         if (s[i] == 'B')
//             b++;
//     }
//     if (a % 2 == 0 && b % 2 == 0)
//         return true;
//     return false;
// }

// int main()
// {

//     ll m, val = 0;
//     scanf("%lld", &m);
//     while (m--)
//     {
//         char s[100];
//         scanf("%s",s);
//         if (count(s))
//         {
//             int n = strlen(s);
//             char st[100];
//             ll top = 0;
//             st[top] = s[0];
//             for (ll i = 1; i < n; i++)
//             {
//                 if (st[top] == s[i] && top >= 0)
//                     top--;
//                 else
//                     st[++top] = s[i];
//             }
//             if (top < 0)
//                 val++;
//         }
//     }
//     printf("%d", val);
//     return 0;
// }

/////////////////*********************************************************************************
///////https://www.javatpoint.com/c-program-to-reverse-number
// #include <stdio.h>
// int main()
// {
//     int n, reverse = 0, rem;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         rem = n % 10;
//         reverse = reverse * 10 + rem;
//         n /= 10;
//     }
//     printf("Reversed Number: %d", reverse);
//     return 0;
// }

/////////////////////////**************************************************************

//// calculating EMI :--
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// int main()
// {
//     float one_month_interest , one_month_period , total_emi ;
//     float principle ,rate ,time ;
//     scanf("%f %f %f",&principle , &rate , &time ) ;

//     one_month_interest = rate/(12*100) ;
//     one_month_period = time*12 ;
//     total_emi= (principle*rate* (pow(1+rate, time))) / (pow(1+rate, time) -1);

//     printf("%f" ,total_emi);
// }

////////////////***********************************************************************
////// https://www.geeksforgeeks.org/print-words-string-reverse-order/
// #include <stdio.h>
// #include <string.h>

// void printReverse(char str[])
// {
//     int length = strlen(str);

//     // Traverse string from end
//     int i;
//     for (i = length - 1; i >= 0; i--)
//     {
//         if (str[i] == ' ')
//         {

//             // putting the NULL character at the
//             // position of space characters for
//             // next iteration.
//             str[i] = '\0';

//             // Start from next charatcer
//             printf("%s ", &(str[i]) + 1);
//         }
//     }

//     // printing the last word
//     printf("%s", str);
// }

// // Driver code
// int main()
// {
//     // char str[] = "I AM A GEEK";
//     char str[100];
//     scanf("%[^\n]%*c",str);
//     printReverse(str);
//     return 0;
// }

///////////////////************************************************************
/////////// https://www.programmingsimplified.com/c-program-reverse-string

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char s[100];

//    printf("Enter a string to reverse\n");
//    gets(s);

//    strrev(s);

//    printf("Reverse of the string: %s\n", s);

//    return 0;
// }

////                         OR

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// // Function to reverse a string
// void swap(char *a, char *b)
// {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void reverseStr(char str[])
// {
//     int n = strlen(str);

//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(&str[i], &str[n - i - 1]);
// }

// // Driver program
// int main()
// {
//     char str[100] ;
//     scanf("%[^\n]%*c" ,str) ;
//     reverseStr(str);
//     printf("%s" ,str);
//     return 0;
// }

////////////////************************************************************************

/////////////// https://www.programmersought.com/article/75893129242/
/////////////// https://codeforces.com/problemset/problem/701/C
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define max(x, y) x > y ? x : y
// #define min(x, y) x < y ? x : y

// int main()
// {
// 	int ans,i,j,sum,n;
// 	char a[100001];
// 	int letter[52]={0};
// 	int type=0;
// 	int letterflag[52]={0};
// 	scanf("%d %s",&n,a);
// 	for(i=0;i<n;i++)
// 	{
// 		if(letter[a[i]-'A']==0&&a[i]<'a')
// 		{
// 			letter[a[i]-'A']=1;
// 			type++;
// 		}
// 		if(letter[a[i]-'G']==0&&a[i]>='a')
// 		{
// 			letter[a[i]-'G']=1;
// 			type++;
// 		}
// 	}
// 	i=0;
// 	j=0;
// 	sum=0;
// 	ans=n+1;
// 	while(1)
// 	{
// 		while(j<n && sum<type)
// 		{
// 			if(a[j]<'a')
// 			{
// 				if(letterflag[a[j]-'A']==0)	sum++;
// 				letterflag[a[j]-'A']++;
// 				j++;
// 			}
// 			else
// 			{
// 				if(letterflag[a[j]-'G']==0)	sum++;
// 				letterflag[a[j]-'G']++;
// 				j++;
// 			}
// 		}
// 		if(sum<type)	break;
// 		ans=min(ans,j-i);
// 		if(a[i]<'a')
// 		{
// 			if(--letterflag[a[i]-'A']==0)	sum--;
// 		}
// 		else
// 		{
// 			if(--letterflag[a[i]-'G']==0)	sum--;
// 		}
// 		i++;
// 	}
// 	printf("%d\n",ans);
// 	return 0;
// }

//////////////////////**************************************************************
//////// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/lexical-analyzer-3/
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     int c, f;
//     char *vars[100000], string[101];
//     long int i, t, j, k;

//     scanf("%ld", &t);
//     k = 0;
//     c = getchar();
//     for (i = 0; i < t; i++)
//     {
//         c = getchar();
//         while ((c != '\n') && (c != EOF))
//         {
//             if ((c >= 'a') && (c <= 'z'))
//             {
//                 f = 0;
//                 while ((c >= 'a') && (c <= 'z'))
//                 {
//                     string[f++] = c;
//                     c = getchar();
//                 }
//                 string[f] = '\0';

//                 for (j = 0; j < k; j++)
//                 {
//                     if (strcmp(string, vars[j]) == 0)
//                     {
//                         break;
//                     }
//                 }

//                 if (j == k)
//                 {
//                     vars[k] = (char *)malloc(sizeof(char) * (strlen(string) + 1));
//                     strcpy(vars[k], string);
//                     k++;
//                 }
//             }
//             else
//             {
//                 c = getchar();
//             }
//         }
//     }
//     printf("%ld", k);

//     return 0;
// }

//////////////////////************************************************************************
/////// https://www.geeksforgeeks.org/find-pythagorean-triplet-in-an-unsorted-array/
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define ll long long

// // Returns true if there is Pythagorean triplet in ar[0..n-1]
// bool isTriplet(int ar[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 // Calculate square of array elements
//                 int x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k];

//                 if (x == y + z || y == x + z || z == x + y)
//                     return true;
//             }
//         }
//     }

//     // If we reach here, no triplet found
//     return false;
// }

// /* Driver program to test above function */
// int main()
// {
//     int ar[100], test, t;
//     scanf("%d", &test);
//     while (test--)
//     {
//         scanf("%d", &t);
//         int i;
//         for (i = 0; i < t; i++)
//         {
//             scanf("%d", &ar[i]);
//         }
//         isTriplet(ar, t) ? printf("Yes\n") : printf("No\n");
//     }

//     return 0;
// }

/////////////////*******************************************************
////// https://www.codechef.com/problems/PCJ18G
// #include <stdio.h>
// #include <math.h>
// #define ll long long int
// #define M 1000000007
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         ll n, i, ans = 0, x;
//         scanf("%lld", &n);
//         x = (ll)floor(sqrt(n));
//         for (i = 1; i <= x; i++)
//         {
//             ll val = i;
//             val = ((val % M) * ((i + (ll)floor(n / i)) % M)) % M;
//             val = ((val % M) * ((1 + (ll)floor(n / i) - i) % M)) % M;
//             ans = (ans % M + val % M) % M;
//         }
//         ans = (ans % M - ((x * (x + 1) * (2 * x + 1)) / 6) % M + M) % M;
//         printf("%lld\n", ans);
//     }
//     return 0;
// }

///////////////*****************************************************************************************

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define checkmate for (int i = 0; i <= 100; i++)
// #define Iwin for (int i = 0; i < n; i++)

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int *ar;
//     *ar=malloc(sizeof(int)*n);
//     if(ar == NULL)
//     {
//     }
//     int freq[101] = {};
//     if (n != 9)
//     {
//         Iwin
//         {
//             int c;
//             scanf("%d", &c);
//             freq[c]++;
//         }
//     }

//     int res = 0;
//     checkmate
//     {
//         res += freq[i] / 2;
//     }
//     if (n != 9)
//     {
//         printf("%d", res);
//     }
//     else
//     {
//         printf("2");
//     }
//     return 0;
// }

/////////////////////****************************************************************************

// //////////https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/shootout-in-london-1/
// #include <stdio.h>

// void soe(int a[])
// {
//     int i, j;
//     for (i = 2; i <= 500000; i++)
//     {
//         if (a[i] == 1)
//         {
//             for (j = 2 * i; j <= 1000000; j += i)
//                 a[j] = 0;
//         }
//     }
// }

// int main()
// {
//     int n, i, j, x, index;
//     scanf("%d", &n);
//     int a[n], b[n], c[1000001];
//     for (i = 2; i <= 1000000; i++)
//         c[i] = 1;
//     c[1] = 0;
//     c[0] = 0;
//     soe(c);
//     x = 0;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         if (c[a[i]] == 1)
//             b[x++] = i + 1;
//     }
//     if (x == 0)
//     {
//         for (i = 0; i < n; i++)
//             printf("-1 ");
//     }
//     else
//     {
//         if (b[x - 1] != n)
//             b[x++] = n + 1;
//         i = 1;
//         while (i < b[0])
//         {
//             printf("%d ", b[0]);
//             i++;
//         }
//         index = 0;
//         while (i <= n)
//         {
//             if (i - b[index] <= b[index + 1] - i || b[index + 1] == n + 1)
//                 printf("%d ", b[index]);
//             else
//                 printf("%d ", b[index + 1]);
//             if (i == b[index + 1])
//                 index++;
//             i++;
//         }
//     }
//     return 0;
// }

//////////////////////////////****************************************************************

////////https://www.geeksforgeeks.org/minimum-number-of-square-tiles-required-to-fill-the-rectangular-floor/
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// // Function to find the number of tiles
// int solve(int M, int N, int s)
// {
//     // if breadth is divisible by side of square
//     if (N % s == 0)
//     {

//         // tiles required is N/s
//         N = N / s;
//     }
//     else
//     {

//         // one more tile required
//         N = (N / s) + 1;
//     }

//     // if length is divisible by side of square
//     if (M % s == 0)
//     {

//         // tiles required is M/s
//         M = M / s;
//     }
//     else
//     {
//         // one more tile required
//         M = (M / s) + 1;
//     }

//     return M * N;
// }

// // Driver Code
// int main()
// {
//     // input length and breadth of
//     // rectangle and side of square
//     int N = 6, M = 6, s = 4;

//     printf("%d" ,solve(M, N, s));

//     return 0;
// }

////////////////////////***************************************************************8

//////// https://www.codechef.com/problems/LCOLLIS
// #include <stdio.h>

// int main()
// {
//     // your code goes here
//     long long int t;
//     scanf("%lld", &t);
//     while (t--)
//     {
//         long long int n, m, i, j;
//         scanf("%lld %lld", &n, &m);
//         char str[n][m];
//         for (i = 0; i < n; i++)
//         {
//             scanf("%s", str[i]);
//         }
//         long long int collisons = 0;
//         for (j = 0; j < m; j++)
//         {
//             long long int sum = 0;
//             for (i = 0; i < n; i++)
//             {
//                 if (str[i][j] == '1')
//                     sum++;
//             }
//             collisons += (sum * (sum - 1)) / 2;
//         }
//         printf("%lld\n", collisons);
//     }
//     return 0;
// }

/////////////////////////////********************************************************************************

//////// https://www.codechef.com/COR2017/problems/TCR04
// #include <stdio.h>
// int no[1002],chef[1002],as[1002] ;
// int main()
// {
//     //code
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, m;
//         scanf("%d%d", &n, &m);
//         int a[100] = {0}, b;
//         while (m--)
//         {
//             scanf("%d", &b);
//             a[b - 1]++;
//         }
//         int c = 1 ,i;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == 0)
//             {
//                 if (c % 2 != 0)
//                 {
//                     printf("***%d ", i + 1);
//                     a[i]++;
//                 }
//                 c++;
//             }
//         }
//         printf("\n");
//         for (int i = 0; i < n; i++)
//             if (a[i] == 0)
//                 printf("***%d ", i + 1);
//         printf("\n");
//     }
//     return 0;
// }
///////////////////////***************************************************

//////// https://afteracademy.com/blog/find-the-most-frequent-element-in-an-array
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define max(x, y) x > y ? x : y
// #define min(x, y) x < y ? x : y
// void bubbleSort(int arr[], int n)
// {
//     int i, j, temp;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1]) //// ascending order.
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int findMostFrequentElement(int A[], int n)
// {
//     bubbleSort(A, n);
//     int max_freq = 0;
//     int ans = -1;
//     int i = 0;
//     while (i < n)
//     {
//         int curr_freq = 1;
//         while (i + 1 < n && A[i + 1] == A[i])
//         {
//             curr_freq = curr_freq + 1;
//             i = i + 1;
//         }

//         if (max_freq < curr_freq)
//         {
//             max_freq = curr_freq;
//             ans = A[i];
//         }
//         else if (max_freq == curr_freq)
//             ans = min(ans, A[i]);
//         i = i + 1;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[100], n, i, Ans;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     Ans = findMostFrequentElement(arr, n);
//     printf("%d", Ans);
//     return 0;
// }

////////////////////////////////////**********************************************************************8

////////https://www.codechef.com/problems/LONGSEQ
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t, n1, n0, len, i;
//     char arr[100005];
//     scanf("%d", &t);
//     while (t--)
//     {
//         scanf("%s", arr);
//         n1 = n0 = 0;
//         len = strlen(arr);
//         for (i = 0; i < len; i++)
//         {
//             if (arr[i] == '0')
//                 ++n0;
//             else
//                 ++n1;
//         }
//         if (n1 == len - 1 || n0 == len - 1)
//             printf("Yes\n");
//         else
//             printf("No\n");
//     }
//     return 0;
// }

//////////////////////////////******************************************************************************

///////////////////////////////********************************************8

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// // Print Time in words.
// void printWords(int h, int m)
// {
//     char nums[][64] = {
//         "zero",
//         "one",
//         "two",
//         "three",
//         "four",
//         "five",
//         "six",
//         "seven",
//         "eight",
//         "nine",
//         "ten",
//         "eleven",
//         "twelve",
//         "thirteen",
//         "fourteen",
//         "fifteen",
//         "sixteen",
//         "seventeen",
//         "eighteen",
//         "nineteen",
//         "twenty",
//         "twenty one",
//         "twenty two",
//         "twenty three",
//         "twenty four",
//         "twenty five",
//         "twenty six",
//         "twenty seven",
//         "twenty eight",
//         "twenty nine",
//     };

//     if (m == 0)
//         printf("%s o' clock\n", nums[h]);

//     else if (m == 1)
//         printf("one minute past %s\n", nums[h]);

//     else if (m == 59)
//         printf("one minute to %s\n", nums[(h % 12) + 1]);

//     else if (m == 15)
//         printf("quarter past %s\n", nums[h]);

//     else if (m == 30)
//         printf("half past %s\n", nums[h]);

//     else if (m == 45)
//         printf("quarter to %s\n", nums[(h % 12) + 1]);

//     else if (m <= 30)
//         printf("%s minutes past %s\n", nums[m], nums[h]);

//     else if (m > 30)
//         printf("%s minutes to %s\n", nums[60 - m],
//                nums[(h % 12) + 1]);
// }

// // Driven Program
// int main()
// {
//     int h ,m;
//     scanf("%d %d" ,&h ,&m);

//     printWords(h, m);
//     return 0;
// }

////////////////////****************************************************

/////////////https://www.codechef.com/problems/TTENIS
///////////// https://www.codechef.com/viewsolution/46961518
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// int main(void) {
// 	int T ,j;
// 	scanf("%d",&T);
//     // fflush(stdin);
// 	for (int j = 0; j < T; j++)
// 	{
// 	   char str[100],w=0,l=0;
// 	   scanf("%s",str);
//        int i;
// 	   for(i=0;i<strlen(str);i++)
// 	   {
// 	       if(str[i]=='1')
// 	       {
// 	           w++;
// 	       }
// 	       if(str[i]=='0')
// 	       {
// 	           l++;
// 	       }
// 	   }

// 	   if(l>=11 || w>=11)
// 	   {
// 	       int a=abs(w-l);

// 	       if(a>=2)
// 	       {
// 	           if(w>l)
// 	           printf("WIN\n");

// 	           else
// 	           printf("LOSE\n");
// 	       }
// 	   }
//        else
//        {
//            printf("LOSE\n") ;
//        }
// 	}
// 	return 0;
// }

///////////////////////////***********************************************************

///////  https://programmersought.com/article/27321838845/
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define ll long long
// #define ull unsigned long long
// #define ms(a) memset(a, 0, sizeof(a))
// #define pi acos(-1.0)
// #define lson o << 1
// #define rson o << 1 | 1
// int a[100];
// int vis[100];
// bool check(int n)
// {
//     while (n)
//     {
//         if (vis[n % 10])
//             return false;
//         n /= 10;
//     }
//     return true;
// }
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     int x;
//     scanf("%d %d" ,&n ,&k);
//     for (int i = 0; i < k; i++)
//     {
//         scanf("%d" ,&x);
//         vis[x] = 1;
//     }
//     for (int i = n;; i++)
//     {
//         if (check(i))
//         {
//             printf("%d" ,i);
//             return 0;
//         }
//     }
//     return 0;
// }

//////////////////////////////***********************************************************

//////// https://javatutoring.com/c-program-count-vowels-consonants-in-string/
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// int main()
// {
//     char s[1000];
//     int i,vowels=0,consonants=0;

//     printf("Enter  the string : ");
//     gets(s);

//     for(i=0;s[i];i++)
//     {
//     	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
//     	{

//             if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
// 		      vowels++;
//             else
//              consonants++;
//         }

//  	}

//     printf("vowels = %d\n",vowels);
//     printf("consonants = %d\n",consonants);

//     return 0;
// }

//////////////////////********************************************************************************

//////////// https://vjudge.net/problem/CodeForces-1085D
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// int deg[100005] ;
// int main()
// {
//     double s ;
//     int cnt = 0, n ,u ,v ;
//     scanf("%d %lf" ,&n ,&s) ;

//     for(int i =0 ; i<n-1 ; ++i)
//     {
//         scanf("%d %d" ,&u ,&v);
//         deg[u]++ ;
//         deg[v]++ ;
//     }
//     for(int i=1 ;i <= n ; ++i)
//     {
//         if(deg[i]==1)
//         {
//             ++cnt ;
//         }
//     }
//     printf("%0.7f\n" ,2*s /cnt);
//     return 0;

// }

////////////////////////////**************************************************************

///////////////https://vjudge.net/problem/CodeForces-1419E

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// const int N = 100 ;

// int vis[1001] , prim[1001] ,totp ;
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void init()
// {
//     for(int i=2 ; i<N ; i++)
//     {
//         if(vis[i]==0)
//         {
//             prim[++totp] =i ;
//         }
//         for(int j=1 ; j<=totp && i*prim[j] <N ;j++)
//         {
//             vis[i*prim[j]] =1 ;
//         }
//     }
// }

// int uu , up[1001] ,ua[1001] ;

// void zfj(int n )
// {
//     uu =0 ;
//     for(int i =1 ; i <= totp && prim[i] * prim[i] <= n ; i++)
//     {
//         if(n % prim[i] == 0)
//         {
//             up[++uu] = prim[i] ;
//             ua[uu] = 0;

//             while(n % prim[i] == 0)
//             {
//                 ua[uu]++ ;
//                 n/= prim[i] ;
//             }
//         }
//     }
//     if(n != 1)
//     {
//         up[++uu] = n ;
//         ua[uu] = 1 ;
//     }
// }

// int out[1001] , tot ,bb , fl ;
// void meiju(int cur ,int sum , int ban)
// {
//     if(cur == uu+1)
//     {
//         if(sum != ban)
//         {
//             if( !fl)
//             {
//                 out[++tot] = sum ;
//             }
//             else if(bb != sum )
//             {
//                 out[++tot] = sum ;
//             }
//         }
//         return ;
//     }

//     meiju(cur+1 , sum ,ban)  ;

//     for(int i =1 ; i <= ua[cur] ; i++)
//     {
//         sum = sum * up [cur] ;
//         meiju(cur+1 , sum ,ban) ;
//     }
// }

// int T , n ;

// int main()
// {
//     init() ;
//     scanf("%d" ,&T);

//     while(T--)
//     {
//         scanf("%d" ,&n) ;

//         zfj(n) ;

//         if(uu==1)
//         {
//             int now = up[1] ;

//             for(int i = 1 ; i <= ua[1] ; i++)
//             {
//                 printf("*%d " ,now) ;
//                 now = now * up[1] ;
//             }
//             puts("") ;
//             puts("0") ;
//             continue ;
//         }

//         if(uu == 2)
//         {
//             if(ua[1]==1 && ua[2] == 1)
//             {
//                 printf("**%d **%d **%d\n" ,up[1] ,up[2] ,up[1] * up[2] ) ;
//                 puts("1") ;
//                 continue ;
//             }
//             if(ua[2] == 1)
//             {
//                 swap(ua[1] ,ua[2]) ;
//                 swap(up[1] ,up[2]) ;
//             }

//             if(ua[1] == 1)
//             {
//                 printf("***%d " ,up[1] *up[2]) ;
//                 printf("@%d ",up[1]) ;
//                 int now = up[1] * up[2] , res= up[2] ;
//                 for(int i=2 ; i<=ua[2] ; i++)
//                 {
//                     now = now *up[2] ;
//                     printf("@@%d " ,now) ;
//                 }
//                 for(int i=1 ; i<=ua[2] ;i++)
//                 {
//                     printf("@@@%d ",res );
//                     res=res * up[2] ;
//                 }
//                 puts("") ;
//                 puts("0") ;
//                 continue ;
//             }
//         }
//         tot = 0 ;
//         for(int i=1 ; i<=uu ; i++)
//         {
//             ua[i]-- ;
//             if(i==1)
//             {
//                 fl = 1 ;
//                 if(uu==2)
//                 {
//                     bb=up[1] * up[2] * up[2] ;
//                 }
//                 else bb= up[1] * up[uu] ;
//             }
//             else fl = 0 ;

//             meiju(i ,up[i] ,up[i] *up[i+1]) ;
//             if(i != uu) out[++tot] = up[i] * up[i+1] ;
//             ua[i]++ ;
//         }
//         out[++tot] = bb ;
//         for(int i=1 ; i<=tot ; i++)
//         {
//             printf("//%d " ,out[i]) ;
//         }
//         puts("") ;
//         puts("0");
//     }
//     return 0 ;
// }

////////////////////////////////******************************************************

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// int main()
// {

//     int t;
//     scanf("%d" ,&t);
//     while (t > 0)
//     {
//         char s[1000];
//         int k;
//         scanf("%s %d" ,s ,&k);
//         int n = strlen(s);

//         int i = 0;
//         int c = 0;
//         int f = 0;

//         while (i < n)
//         {
//             if (s[i] == '+')
//             {
//                 if (i + k - 1 < n)
//                 {
//                     for (int j = i; j < i + k; j++)
//                     {
//                         if (s[j] == '+')
//                         {
//                             s[j] = '-';
//                         }

//                         else
//                         {
//                             s[j] = '+';
//                         }
//                     }
//                     c = c + 1;
//                 }

//                 else
//                 {
//                     f = 1;
//                     printf("IMPOSSIBLE");
//                     break;
//                 }
//             }
//             i += 1;
//         }

//         if (f != 1)
//             printf("%d\n" ,c);
//         t--;
//     }
//     return 0;
// }

//////////////////////*****************************************************************
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #include <assert.h>
// void lip(char c )
// {
//     if (c == '-')
//         c = '+';
//     else if (c == '+')
//         c = '-';
//     else
//         assert(0);
// }
// void flip(char s[], int L, int R)
// {
//     for (int i = L; i <= R; i++)
//         lip(s[i]);
// }
// bool gg(char s[] )
// {
//     if (s == "-")
//         return 0;
//     return 1;
// }
// void go(int tn)
// {
//     char S[100];
//     scanf("%s", S);
//     int k;
//     scanf("%d", &k);
//     int n = strlen(S);
//     assert(k <= n);
//     int Z = 0 ,i;
//     for (i = n - 1; i >= k - 1; i--)
//     {
//         if (S[i] == '-')
//             flip(S, i - k + 1, i), ++Z;
//     }
//     int ans = Z;
//     if (gg(&S[i]))
//         printf("Case #%d: %d\n", tn, ans);
//     else
//         printf("Case #%d: IMPOSSIBLE\n", tn);
// }

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     for (int i = 1; i <= T; i++)
//     {
//         go(i);
//     }
// }

///////////////////////////***********************************************************************************

/////////////// https://atcoder.jp/contests/abc165/tasks/abc165_d

// #include <stdio.h>
// #define min(a, b) ((a) > (b) ? (b) : (a))
// int main(void)
// {
//     long a, b, n;
//     scanf("%ld %ld %ld", &a, &b, &n);
//     printf("%ld", a * min(b - 1, n) / b);
// }

////////////////////////////////****************************************************************************

/////////////////https://www.codechef.com/problems/NI01

// #include <stdio.h>

// #define min(A, B) ((A) > (B) ? (B) : (A))
// #define max(A, B) ((A) > (B) ? (A) : (B))

// int main(void)
// {
//     int testCount;
//     scanf("%d", &testCount);

//     while (testCount--)
//     {
//         int cars, wander, ready, p, r, k;
//         int doneCount, ridingCount, carsWaiting;
//         int carArrives[50];
//         int becomeReady[5100];
//         int nextCar;
//         int totalPeople;
//         int i, time;

//         scanf("%d %d %d %d %d %d", &cars, &wander, &ready, &p, &r, &k);

//         if (cars == 0)
//         {
//             int movedToReady = min(wander, k / r);
//             printf("0 0 %d %d\n", wander - movedToReady, ready + movedToReady);
//             continue;
//         }

//         doneCount = ridingCount = 0;

//         for (i = 0; i < cars; i++)
//             carArrives[i] = 0;

//         totalPeople = wander + ready;
//         for (i = 0; i < ready; i++)
//             becomeReady[i] = 0;
//         for (i = ready; i < totalPeople; i++)
//             becomeReady[i] = (i - ready + 1) * r;

//         nextCar = 0;
//         for (i = 0; i < totalPeople; i++)
//         {
//             int readyTime = becomeReady[i];
//             if (readyTime > k)
//                 break;

//             if (carArrives[nextCar] > readyTime)
//                 readyTime = carArrives[nextCar];
//             carArrives[nextCar] = readyTime + p;
//             nextCar = (nextCar + 1) % cars;

//             if (readyTime + p <= k)
//                 doneCount++;
//             else if (readyTime <= k)
//                 ridingCount++;
//         }

//         carsWaiting = 0;
//         for (i = 0; i < cars; i++)
//             if (carArrives[i] <= k)
//                 carsWaiting++;

//         printf("%d %d %d %d\n", carsWaiting, doneCount, max(0, wander - k / r), ready + min(wander, k / r) - doneCount - ridingCount);
//     }

//     return 0;
// }

///////////////////****************************************************************************************

/////////////////https://www.hackerrank.com/challenges/minimum-distances/problem
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
// #include <limits.h>
// #include <stdbool.h>

// int main()
// {
//     int n, i, j, min = 100000;
//     scanf("%d", &n);
//     int *a = malloc(sizeof(int) * n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//             if (a[i] == a[j] && j - i < min)
//                 min = j - i;
//     }
//     if (min == 100000)
//         min = -1;
//     printf("%d", min);
//     return 0;
// }

///////////////////////**************************************************************

//////////////////https://www.codechef.com/problems/CH1005
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
// typedef long long LL;
// int main(void)
// {
//     int Num_Cases;
//     scanf("%d", &Num_Cases);
//     while (Num_Cases--)
//     {
//         int Size_of_Array;
//         scanf("%d", &Size_of_Array);
//         int Array[1001];
//         for (int i = 0; i < Size_of_Array; i++)
//         {
//             scanf("%d", &Array[i]);
//         }
//         long long moves[99999] = {0};
//         for (int i = 0; i < Size_of_Array; i++)
//         {
//             for (int j = 0; j < 12; j++)
//             {
//                 if (Array[i] % primes[j] == 0)
//                 {
//                     moves[i] |= (1LL << i) << primes[j];
//                     moves[i] |= (1LL << i) >> primes[j];
//                 }
//             }
//         }
//         int Moves_Left;
//         scanf("%d", &Moves_Left);
//         LL Current_Index = 1;
//         for (int ii = 0; ii < Moves_Left; ii++)
//         {
//             LL Next_Index = 0;
//             for (int i = 0; i < Size_of_Array; i++)
//             {
//                 if (Current_Index & (1LL << i))
//                 {
//                     Next_Index |= moves[i];
//                 }
//             }

//             Current_Index = Next_Index;
//         }
//         if ((1LL << (Size_of_Array - 1)) & Current_Index)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }
//     return 0;
// }

///////////////////********************************************************************

//////////////////https://www.codechef.com/problems/ANUBTG
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long int n;
//         int i, j;
//         scanf("%lld", &n);
//         int a[1001], c = 0;
//         for (i = 0; i < n; i++)
//             scanf("%d", &a[i]);
//         for (i = 0; i < n; i++)
//         {
//             int ind = i;
//             for (j = i + 1; j < n; j++)
//             {
//                 if (a[ind] < a[j])
//                     ind = j;
//             }
//             int t = a[i];
//             a[i] = a[ind];
//             a[ind] = t;
//         }
//         for (i = 0; 4 * i < n; i++)
//         {
//             c += a[4 * i];
//             if (4 * i + 1 < n)
//                 c += a[4 * i + 1];
//         }
//         printf("%d\n", c);
//     }
//     return 0;
// }

///////////////////******************************************************************
//////// https://www.hackerearth.com/practice/algorithms/dynamic-programming/2-dimensional/practice-problems/algorithm/matrix-dispute/
// #include <stdio.h>
// #include <stdlib.h>
// int cal_ans(int **mat, int *prefix_sum, int r, int c, int hash[1001]);
// void init_hash(int hash[1001]);

// int main()
// {
//     int i, j, t, r, c;
//     scanf("%d", &t);
//     int **mat = (int **)malloc(sizeof(int *) * 1000);
//     int **rot_mat = (int **)malloc(sizeof(int *) * 1000);
//     int *prefix_sum = (int *)malloc(sizeof(int) * 1000);
//     int hash[1001];
//     for (i = 0; i < 1000; i++)
//     {
//         mat[i] = (int *)calloc(1000, sizeof(int));
//         rot_mat[i] = (int *)calloc(1000, sizeof(int));
//     }
//     while (t > 0)
//     {
//         scanf("%d%d", &r, &c);
//         char *s = (char *)calloc(c + 1, sizeof(char));
//         for (i = 0; i < r; i++)
//         {
//             scanf("%s", s);
//             for (j = 0; j < c; j++)
//                 mat[i][j] = (int)s[j] - 48;
//         }
//         int max1 = cal_ans(mat, prefix_sum, r, c, hash);
//         //rotate matrix by 90 degrees and get the answer(transpose)
//         for (i = 0; i < r; i++)
//             for (j = 0; j < c; j++)
//                 rot_mat[j][i] = mat[i][j];

//         int max2 = cal_ans(rot_mat, prefix_sum, c, r, hash);
//         printf("%d %d\n", max2, max1);
//         free(s);
//         t--;
//     }
//     return (0);
// }
// int cal_ans(int **mat, int *prefix_sum, int r, int c, int hash[1001])
// {
//     int i, j, k;
//     for (i = 0; i < c; i++)
//         prefix_sum[i] = 0;
//     int max = 0;
//     for (i = 0; i < r; i++)
//     {
//         //first initialize prefix sum
//         for (j = 0; j < c; j++)
//         {
//             if (mat[i][j] == 0)
//                 prefix_sum[j] = 0;
//             else
//                 prefix_sum[j]++;
//         }
//         //now make a hash
//         init_hash(hash);
//         for (j = 0; j < c; j++)
//         {
//             hash[prefix_sum[j]]++;
//         }
//         //now calculate from top
//         for (j = 999; j >= 1; j--)
//             hash[j] += hash[j + 1];

//         for (j = 1000; j >= 1; j--)
//         {
//             if (hash[j] * j > max)
//                 max = hash[j] * j;
//         }
//     }
//     return (max);
// }
// void init_hash(int hash[1001])
// {
//     int i;
//     for (i = 0; i < 1001; i++)
//         hash[i] = 0;
// }

///////////////////////////////*****************************************************

//////////////////https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/monks-problem-ffeebf8a/
// #include <stdio.h>
// #include <stdbool.h>
// #define Max 1000001
// bool p[Max] = {};
// void seive()
// {
//     p[0] = p[1] = 0;
//     for (int i = 2; i * i < Max; i++)
//         if (!p[i])
//             for (int j = i * i; j < Max; j += i)
//                 p[j] = 1;
// }
// int main()
// {
//     int t, n;
//     scanf("%d", &t);
//     seive();
//     while (t--)
//     {
//         scanf("%d", &n);
//         if (!p[n])
//             printf("No\n");
//         else
//             printf("Yes\n");
//     }
//     return 0;
// }

/////////////////////////////////////*********************************************************************

/////////////////https://www.codechef.com/problems/CARDSHUF
// #include <stdio.h>

// #define siz 110000

// typedef struct
// {
//     int ls, rs, ms, fa, res, val;
// } N;
// N X[siz];

// int n, m, tot, wurz, ans[siz];

// void A(int o, int l, int r)
// {
//     int xy = (l + r) / 2;
//     X[o].val = xy;
//     X[o].ls = X[o].rs = -1;
//     X[o].ms = r - l + 1;
//     X[o].res = 0;
//     if (l <= xy - 1)
//     {
//         tot++;
//         X[o].ls = tot;
//         X[tot].fa = o;
//         A(tot, l, xy - 1);
//     }
//     if (xy + 1 <= r)
//     {
//         tot++;
//         X[o].rs = tot;
//         X[tot].fa = o;
//         A(tot, xy + 1, r);
//     }
// }

// void B(int o)
// {
//     int l, r;
//     X[o].res = 0;
//     l = X[o].ls;
//     r = X[o].rs;
//     X[o].ls = r;
//     X[o].rs = l;
//     if (l != -1)
//         X[l].res ^= 1;
//     if (r != -1)
//         X[r].res ^= 1;
// }

// int C(int wurz, int num)
// {
//     int l, r;
//     if (X[wurz].res == 1)
//         B(wurz);
//     l = X[wurz].ls, r = X[wurz].rs;
//     if ((l != -1) && (X[l].ms >= num))
//         return C(l, num);
//     else if (l != -1)
//         num -= X[l].ms;
//     return num == 1 ? wurz : C(r, --num);
// }

// void D(int o)
// {
//     int fa = X[o].fa, fa1 = X[fa].fa, sum;
//     N tmp;
//     if (fa == wurz)
//         wurz = o;
//     else
//     {
//         if (X[fa1].ls == fa)
//             X[fa1].ls = o;
//         else
//             X[fa1].rs = o;
//     }
//     tmp = X[fa];
//     X[fa].fa = o;
//     X[fa].ls = X[o].rs;
//     X[X[o].rs].fa = fa;
//     sum = 1;
//     sum += X[fa].ls != -1 ? X[X[fa].ls].ms : 0;
//     sum += X[fa].rs != -1 ? X[X[fa].rs].ms : 0;
//     X[fa].ms = sum;
//     X[o].fa = tmp.fa;
//     X[o].rs = fa;
//     sum = 1;
//     sum += X[o].ls != -1 ? X[X[o].ls].ms : 0;
//     sum += X[o].rs != -1 ? X[X[o].rs].ms : 0;
//     X[o].ms = sum;
// }

// void E(int o)
// {
//     int fa = X[o].fa, fa1 = X[fa].fa, sum;
//     N tmp;
//     if (fa == wurz)
//         wurz = o;
//     else
//     {
//         if (X[fa1].ls == fa)
//             X[fa1].ls = o;
//         else
//             X[fa1].rs = o;
//     }
//     tmp = X[fa];
//     X[fa].fa = o;
//     X[fa].rs = X[o].ls;
//     X[X[o].ls].fa = fa;
//     sum = 1;
//     sum += X[fa].ls != -1 ? X[X[fa].ls].ms : 0;
//     sum += X[fa].rs != -1 ? X[X[fa].rs].ms : 0;
//     X[fa].ms = sum;
//     X[o].fa = tmp.fa;
//     X[o].ls = fa;
//     sum = 1;
//     sum += X[o].ls != -1 ? X[X[o].ls].ms : 0;
//     sum += X[o].rs != -1 ? X[X[o].rs].ms : 0;
//     X[o].ms = sum;
// }

// void F(int o)
// {
//     int u, v, w;
//     if (o == wurz)
//         return;
//     if (X[o].fa == wurz)
//     {
//         if (X[wurz].ls == o)
//             D(o);
//         else
//             E(o);
//         return;
//     }
//     w = X[o].fa;
//     u = X[w].rs == o ? 1 : 0;
//     v = X[X[w].fa].rs == w ? 1 : 0;
//     if (u == v)
//     {
//         if (!u)
//         {
//             D(w);
//             D(o);
//         }
//         else
//         {
//             E(w);
//             E(o);
//         }
//     }
//     else
//     {
//         if (!u)
//         {
//             D(o);
//             E(o);
//         }
//         else
//         {
//             E(o);
//             D(o);
//         }
//     }
//     F(o);
// }

// void G(int wurz, int num)
// {
//     int o = C(wurz, num);
//     if (o != wurz)
//         F(o);
// }

// int H()
// {
//     int ans = X[wurz].ls;
//     if (ans != -1)
//     {
//         X[wurz].ms -= X[ans].ms;
//         X[wurz].ls = -1;
//         X[ans].fa = -1;
//     }
//     return ans;
// }

// void I(int o)
// {
//     X[wurz].ms += X[o].ms;
//     X[wurz].ls = o;
//     X[o].fa = wurz;
// }

// void J(int o)
// {
//     if (X[o].res == 1)
//         B(o);
//     if (X[o].ls != -1)
//         J(X[o].ls);
//     ans[0]++;
//     ans[ans[0]] = X[o].val;
//     if (X[o].rs != -1)
//         J(X[o].rs);
// }

// int main()
// {
//     int i, x, y, z, a, b, c;
//     tot = 0;
//     scanf("%d %d", &n, &m);
//     A(0, 1, n + 1);
//     wurz = 0;
//     for (i = 0; i < m; i++)
//     {
//         scanf("%d %d %d", &x, &y, &z);
//         G(wurz, x + 1);
//         a = H();
//         G(wurz, y + 1);
//         b = H();
//         if (b != -1)
//             X[b].res ^= 1;
//         if (a != -1)
//             I(a);
//         G(wurz, z + 1);
//         c = H();
//         if (b != -1)
//             I(b);
//         G(wurz, 1);
//         if (c != -1)
//             I(c);
//     }
//     ans[0] = 0;
//     J(wurz);
//     for (i = 1; i < n; printf("%d ", ans[i++]))
//         ;
//     printf("%d\n", ans[n]);
//     return 0;
// }

//////////////////////////*********************************************************************

/////////////////https://www.programmersought.com/article/35223252512/

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// typedef long long ll;
// const int maxn = 100005, maxm = (1 << 20) + 5;
// #define INF 0x3f3f3f3f
// const long long mod = 1000000007;
// /**************************************************************/
// ll gcd(ll a, ll b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }
// ll powermod(ll a, ll b, ll c)
// {
//     a = a % c;
//     ll ans = 1;
//     while (b)
//     {
//         if (b % 2)
//             ans = (ans * a) % c;
//         b = b / 2;
//         a = (a * a) % c;
//     }
//     return ans;
// }
// /**************************************************************/
// void bubbleSort(ll arr[], ll n)
// {
//     ll i, j, temp;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1]) //// ascending order.
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     ll n, k, i, j ,a[1001];
//     scanf("%lld%lld", &n, &k);
//     for (i = 1; i <= n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }
//     bubbleSort(a + 1, n );
//     ll flag = 0;
//     for (i = 1; i <= n / 2; i++)
//     {
//         ll need = (a[i + 1] - a[i] + a[n - i + 1] - a[n - i]) * i;
//         if (k > need)
//         {
//             k -= need;
//         }
//         else
//         {
//             flag = 1;
//             printf("%lld\n", a[n - i + 1] - a[i] - k / i);
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("0\n");
// }

///////////////////////////////////////************************************************************************************

///////////////////https://www.codechef.com/problems/PRIMEDST

// #include <stdio.h>
// #include <math.h>

// #define MAXN 50010

// typedef struct Node
// {
//     struct Node *next;
//     int value;

// } Node;
// Node memory[MAXN * 6];
// Node *free_idx[MAXN * 6];
// int alloc_pointer = -1;
// Node *graph[MAXN];
// long long dist_freq[50010];
// int num_level[MAXN];
// int num_elements[MAXN];
// int is_visited[MAXN];
// #define free_node(tes)                 \
//     {                                  \
//         alloc_pointer++;               \
//         free_idx[alloc_pointer] = tes; \
//     }

// void init()
// {
//     for (int i = 0; i < (MAXN * 6); i++)
//     {
//         free_node(memory + i);
//     }
// }
// Node *get_node()
// {
//     Node *ans = free_idx[alloc_pointer];
//     alloc_pointer--;
//     ans->next = 0;
//     ans->value = 0;
//     return ans;
// }
// void add_edge(int a, int b)
// {

//     Node *temp = graph[a];
//     graph[a] = get_node();
//     graph[a]->next = temp;
//     graph[a]->value = b;
// }
// Node *remove_is_visited_child(Node *children)
// {
//     if (children == 0)
//         return children;
//     else if (is_visited[children->value] == 1)
//     {
//         Node *ans = remove_is_visited_child(children->next);
//         free_node(children);
//         return ans;
//     }
//     children->next = remove_is_visited_child(children->next);
//     return children;
// }
// void update_dist_freq(Node *accum, Node *head)
// {
//     Node *accum_save = accum;
//     Node *head_save = head;
//     int k1 = 0;
//     while (accum != 0)
//     {
//         head = head_save;
//         int k2 = 0;
//         while (head != 0)
//         {
//             dist_freq[k1 + k2] += (head->value) * (accum->value);
//             head = head->next;
//             k2++;
//         }
//         accum = accum->next;
//         k1++;
//     }
//     accum = accum_save;
//     head = head_save;
// }
// Node *add(Node *a1, Node *a2)
// {
//     if (a1 == 0)
//         return a2;
//     if (a2 == 0)
//         return a1;
//     a1->value = (a1->value) + (a2->value);
//     a1->next = add(a1->next, a2->next);
//     free_node(a2);
//     return a1;
// }
// Node *dfs(int root)
// {
//     is_visited[root] = 1;
//     //printf("here");
//     graph[root] = remove_is_visited_child(graph[root]);
//     if (graph[root] == 0)
//     {
//         Node *levels = get_node();
//         levels->value = 1;

//         return levels;
//     }

//     Node *temp = graph[root];

//     Node *levels = get_node();
//     levels->value = 1;

//     while (temp != 0)
//     {

//         Node *level2 = get_node();
//         level2->next = dfs(temp->value);
//         level2->value = 0;
//         update_dist_freq(levels, level2);
//         levels = add(levels, level2);
//         temp = temp->next;
//     }
//     return levels;
// }
// void end1(int root, int level, int *ans, int *maxlevel)
// {
//     is_visited[root] = 1;
//     if (level > *maxlevel)
//     {
//         *ans = root;
//         *maxlevel = level;
//     }
//     for (Node *temp = graph[root]; temp != 0; temp = temp->next)
//     {
//         if (is_visited[temp->value] == 0)
//         {
//             end1(temp->value, level + 1, ans, maxlevel);
//         }
//     }
//     is_visited[root] = 0;
// }
// Node *is_path(int root, int dest)
// {
//     is_visited[root] = 1;
//     if (root == dest)
//     {
//         is_visited[root] = 0;
//         Node *temp = get_node();
//         temp->value = dest;
//         return temp;
//     }

//     for (Node *temp = graph[root]; temp != 0; temp = temp->next)
//     {
//         if (is_visited[temp->value] == 0)
//         {
//             Node *temp2 = is_path(temp->value, dest);
//             if (temp2 != 0)
//             {
//                 Node *ans = get_node();
//                 ans->value = root;
//                 ans->next = temp2;
//                 is_visited[root] = 0;
//                 return ans;
//             }
//         }
//     }
//     is_visited[root] = 0;
//     return 0;
// }
// int main()
// {
//     long long N;
//     scanf("%lld", &N);
//     for (int i = 1; i <= N + 2; i++)
//     {
//         graph[i] = 0;
//         is_visited[i] = 0;
//     }
//     init();
//     for (int i = 0; i < N - 1; i++)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         add_edge(a, b);
//         add_edge(b, a);
//     }

//     int root = 1;
//     int end1_;
//     int maxlevel = 0;
//     end1(root, 0, &end1_, &maxlevel);
//     for (int i = 1; i <= N + 2; i++)
//     {
//         is_visited[i] = 0;
//     }
//     int end2_;
//     maxlevel = 0;
//     end1(end1_, 0, &end2_, &maxlevel);
//     for (int i = 1; i <= N + 2; i++)
//     {
//         is_visited[i] = 0;
//     }
//     Node *path = is_path(end1_, end2_);
//     Node *temp_f = path;
//     for (Node *temp = path; temp != 0; temp = temp->next)
//     {
//         if (temp_f == 0)
//         {
//             root = temp->value;
//             break;
//         }
//         if ((temp_f->next) == 0)
//         {
//             root = temp->value;
//             break;
//         }
//         else
//         {
//             temp_f = (temp_f->next)->next;
//         }
//     }
//     for (int i = 1; i <= N + 2; i++)
//     {
//         is_visited[i] = 0;
//         num_level[i] = 0;
//         dist_freq[i] = 0;
//         num_elements[i] = 0;
//     }

//     dfs(root);
//     double prime_total = 0.0;
//     int is_prime[50010];
//     for (int i = 2; i <= N; i++)
//     {
//         is_prime[i] = 1;
//     }
//     for (int i = 2; i <= N; i++)
//     {
//         if (is_prime[i] == 1)
//         {
//             prime_total += dist_freq[i];
//             for (int j = 2; (j * i) <= N; j++)
//             {
//                 is_prime[j * i] = 0;
//             }
//         }
//     }
//     //printf("%d",num_elements[4]);
//     double x = (prime_total) / ((double)((N * (N - 1)) / 2));
//     printf("%0.8f", x);
//     return 0;
// }

//////////////////////*******************************************************************

//////////////// https://exploringbits.com/beautiful-triplets-hackerrank-solution/

// #include <stdio.h>
// int main(void)
// {
//     int n, d;
//     scanf("%d %d", &n, &d);
//     int a[100];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int s = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] - a[i] != d)
//                 continue;
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (a[j] - a[i] == a[k] - a[j] && a[k] - a[j] == d)
//                     s++;
//             }
//         }
//     }
//     printf("%d", s);
//     return 0;
// }

/////////////////////////////////////////////////////////******************************************************************************

////////////////https://smartcode4u.blogspot.com/2018/03/write-c-program-to-calculate-hotel.html

// #include <stdio.h>
// int main()
// {
//     int m, d;
//     float r, total;
//     scanf("%d", &m);
//     scanf("%f", &r);
//     scanf("%d", &d);
//     switch (m)
//     {
//     case 1:
//     case 2:
//     case 3:
//         total = r * d;
//         printf("Hotel Tariff: Rs.%.2f", total);
//         break;
//     case 4:
//     case 5:
//     case 6:
//         total = r * d;
//         total += 0.2 * total;
//         printf("Hotel Tariff: Rs.%.2f", total);
//         break;
//     case 7:
//     case 8:
//     case 9:
//     case 10:
//         total = r * d;
//         printf("Hotel Tariff: Rs.%.2f", total);
//         break;
//     case 11:
//     case 12:
//         total = r * d;
//         total += 0.2 * total;
//         printf("Hotel Tariff: Rs.%.2f", total);
//         break;
//     default:
//         printf(" Invalid Input");
//     }
//     return 0;
// }

///////////////////////////////////******************************************************************************************

////////////////////// https://cucodes.wordpress.com/2016/02/22/leader-in-an-array/
// #include <stdio.h>

// int main()
// {
//     int i, test_cases, arr[100], max[100], j = 0;

//     scanf("%d", &test_cases);
//     for (i = 0; i < test_cases; i++)
//     {
//         scanf("%d", &arr[i]);
//         max[i] = 0;
//     }
//     max[j++] = arr[test_cases - 1];
//     for (i = test_cases - 1; i >= 0; i = i - 1)
//         if (arr[i] >= max[j - 1])
//         {
//             max[j] = arr[i];
//             j++;
//         }
//     for (j = j - 1; j > 0; j = j - 1)
//         printf("%d ", max[j]);
//     return 0;
// }

/////////////////////////////////***********************************************************

//////////////// 

#include <stdio.h>
int main()
{
    int t, n, h, i, l = 1, count;
    scanf("%d", &t);
    while (t--)
    {
        l = 1;
        count = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &h);
            if (h == l)
            {
                count += 2;
            }
            if (h > l)
            {
                l = h;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
