
/*In a galaxy far far away there is an ancient game played among the planets. The specialty of the game
is that there is no limitation on the number of players in each team, as long as there is a captain in
the team. (The game is totally strategic, so sometimes less player increases the chance to win). So the
coaches who have a total of N players to play, selects K (1 ≤ K ≤ N) players and make one of them
as the captain for each phase of the game. Your task is simple, just find in how many ways a coach
can select a team from his N players. Remember that, teams with same players but having different
captain are considered as different team.
Input
The first line of input contains the number of test cases T ≤ 500. Then each of the next T lines contains
the value of N (1 ≤ N ≤ 109
), the number of players the coach has.
Output
For each line of input output the case number, then the number of ways teams can be selected. You
should output the result modulo 1000000007.
For exact formatting, see the sample input and output.
Sample Input
3
1
2
3
Sample Output
Case #1: 1
Case #2: 4
Case #3: 12*/

#include <stdio.h>
const int mod = 1000000007;
typedef long long LL;

LL powMod(LL a, LL b)
{
    LL res=1;
    while(b)
    {
        if(b&1)
            res = res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

int cas=1;
void work()
{
    int n;
    scanf("%d",&n);
    printf("Case #%d: %lld\n", cas++, powMod(2, n-1)*n%mod);
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
        work();
}