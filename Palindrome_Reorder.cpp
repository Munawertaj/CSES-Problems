//  https://cses.fi/problemset/task/1755

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
    string st;
    cin >> st;
    int count[100] = {0};
    int len = st.length();
    for (int i = 0; i < len; i++)
        count[(int)st[i]]++;
    int odd = 0, indx = 0;
    for (int i = 65; i <= 90; i++)
    {
        if (count[i] % 2 != 0)
        {
            odd++;
            indx = i;
        }
    }

    string result;
    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return;
    }

    else
    {
        for (int i = 65; i <= 90; i++)
        {
            if (i != indx)
            {
                for (int j = 0; j < count[i] / 2; j++)
                    result.pb((char)i);
            }
        }
    }
    cout << result;
    if (odd)
    {
        for (int i = 0; i < count[indx]; i++)
            cout << (char)indx;
    }

    reverse(result.begin(), result.end());
    cout << result;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}