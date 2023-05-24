#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9+7;

/*

                    AUTHOR        : NEEL SHETH
                                    AHMEDABAD UNIVERSITY

                    CODEFORCES    : neelxdxd
                    CODECHEF      : neelxdxd

*/

bool isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return true;
    return false;
}

string removeDuplicate(string s)
{
    string temp = "";
    temp += s.at(0);
 
    for (int i = 1; i < s.length(); i++) {
        if (!(temp.find(s.at(i)) < temp.length()))
            temp = temp + s.at(i);
    }
    return temp;
}

long long int convert(ll n)
{
    string s = to_string(n);
    ll ans = 0;
    for(auto x : s)
    {
        ans += (x -'0');
    }
    return ans;
}
 
int powr(int a, int b){
    int ans =1;
    while (b>0){
        if ((b&1)==1){
            ans=(ans*1LL*a)%mod;
 
        }
        a=(a*1LL*a)%mod;
        b=b>>1;
    }
    return ans;
}
 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 

int lower_Bound(int a[], int x){
    int n;             // Define size here
    int *ptr = lower_bound(a, a+n, x);
        return *ptr;
}

int upper_Bound(vector<int> a,int x){
    auto it = upper_bound(a.begin(),a.end(), x);
    return *it;
}

bool isDigit(string str){
    for (ll i = 0; i < str.size(); i++) {
        if(!(isdigit(str[i]))){
            return false;
        }
    }return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(10)<<fixed;
    
    cout<<"Hello World!";
    
    return 0;
}