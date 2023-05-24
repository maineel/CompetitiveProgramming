#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

/*

                    AUTHOR        : NEEL SHETH
                                    AHMEDABAD UNIVERSITY

                    CODEFORCES    : neelxdxd
                    CODECHEF      : neelxdxd

*/

int main()
{

    int n, s, count[5] = {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &s);
        count[s] += 1;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
}