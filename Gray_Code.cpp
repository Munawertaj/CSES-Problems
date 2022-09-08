//  https://cses.fi/problemset/task/2205

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
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin() + 1
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin() + 1
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

string int_to_binary(int num, int len)
{
    string res;
    int count = 0;
    int rem;
    while (count < len)
    {
        if (num % 2 == 0)
            res.pb('0');
        else
            res.pb('1');
        num /= 2;
        count++;
    }
    REVERSE(res);

    return res;
}

string bin_to_gray(string st)
{
    string res;
    res.pb(st[0]);
    for (int i = 1; i < st.size(); i++)
    {
        int x = st[i] - '0';
        int y = res[i - 1] - '0';
        int temp = x ^ y;
        if (temp == 0)
            res.pb('0');
        else
            res.pb('1');
    }

    return res;
}

void solve()
{
    int size;
    cin >> size;
    ll total = pow(2, size);
    string res[total + 1];
    for (int i = size - 1; i >= 0; i--)
    {

        ll first_0 = pow(2, i);
        ll seq = 2 * first_0;
        ll count = 0;
        bool flag = 1;
        ll j;
        for (j = 1; j <= first_0; j++)
            res[j].pb('0');
        for (j; j <= total; j++)
        {
            if (flag == 1)
            {
                res[j].pb('1');
                count++;
                if (count == seq)
                {
                    flag = 0;
                    count = 0;
                }
            }
            else
            {
                res[j].pb('0');
                count++;
                if (count == seq)
                {
                    flag = 1;
                    count = 0;
                }
            }
        }
    }
    for (int i = 1; i <= total; i++)
        cout << res[i] << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}