// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<int> mycom(vector<pair<int, int>> v)
{
    vector<pair<int, int>> u;
    for (int i = 0; i < v.size(); i++)
    {
        u.emplace_back(v[i].second, v[i].first);
    }

    sort(u.begin(), u.end());

    vector<int> ans;
    for (int i = 0; i < u.size(); i++)
    {
        ans.push_back(u[i].second);
    }
    return ans;
}

vector<int> sortA1ByA2(vector<int> a, int n, vector<int> b, int m)
{
    map<int, int> m1;
    for (int i = 0; i < m; i++)
    {
        m1[b[i]] = i;
    }

    vector<pair<int, int>> v;
    vector<int> u;
    for (int i = 0; i < n; i++)
    {
        if (m1.find(a[i]) != m1.end())
        {
            v.emplace_back(a[i], m1[a[i]]);
        }
        else
        {
            u.push_back(a[i]);
        }
    }

    sort(u.begin(), u.end());

    vector<int> res;
    res = mycom(v);
    for (int i = 0; i < u.size(); i++)
    {
        res.push_back(u[i]);
    }

    return res;
}
