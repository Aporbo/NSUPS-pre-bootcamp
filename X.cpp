/*n participants of the competition were split into m teams in some manner so that each team has at least one participant. After the competition each pair of participants from the same team became friends.

Your task is to write a program that will find the minimum and the maximum number of pairs of friends that could have formed by the end of the competition.

Input
The only line of input contains two integers n and m, separated by a single space (1 ≤ m ≤ n ≤ 109) — the number of participants and the number of teams respectively.

Output
The only line of the output should contain two integers kmin and kmax — the minimum possible number of pairs of friends and the maximum possible number of pairs of friends respectively.

Examples
Input
5 1
Output
10 10
Input
3 2
Output
1 1
Input
6 3
Output
3 6*/


#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    long long int n,m;
    cin>>n>>m;
    long long int max = 0,min = 0;
    max = (n-m+1)*(n-m)/2;

    long long int num1,num2;
    num1 = n/m;
    num2 = n%m;

    min += num1*(num1-1)/2*(m-num2) ;
    min += (num1+1)*(num1)/2*num2;
    cout<<min<<' '<<max<<endl;
    return 0;
}