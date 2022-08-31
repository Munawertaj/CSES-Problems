//  https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define vss vector<string>
#define vSort(v) sort(v.begin(), v.end())
#define vReverseSort(v) sort(v.rbegin(), v.rend())
#define vReverse(v) reverse(v.rbegin(), v.rend())
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define setdigit(n) fixed << setprecision(n)
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve()
{
    int num;
    cin >> num;
    if (num % 4 == 0)
    {
        cout << "YES" << nl << num / 2 << nl;
        for (int i = 1; i <= num / 2; i += 2)
            cout << i << " " << num - i + 1 << " ";
        cout << nl << num / 2 << nl;
        for (int i = 2; i <= num / 2; i += 2)
            cout << i << " " << num - i + 1 << " ";
    }
    else if (num % 4 == 3)
    {
        cout << "YES" << nl << num / 2 + 1 << nl;

        for (int i = 1; i <= num / 2; i += 2)
            cout << i << " " << num - i << " ";
        cout << nl << num / 2 << nl;
        for (int i = 2; i <= num / 2; i += 2)
            cout << i << " " << num - i << " ";
        cout << num;
    }
    else
        cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}