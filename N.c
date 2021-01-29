/*Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32*/

#include<stdio.h>
int main()
{ int t,i,d;
    long a;
    scanf("%d",&t);
    while(t--)
    {   long s=0;
        scanf("%ld",&a);
        while(a!=0){
            d=a%10;
            s=s*10+d;
            a=a/10;
        }
        printf("%ld\n",s);
    }
}