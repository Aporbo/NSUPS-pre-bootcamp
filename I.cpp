/*Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers representing the array's elements.

Constraints


Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n,temp,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
        sum=sum+arr[i];
    }
    cout<<sum;

    return 0;
}