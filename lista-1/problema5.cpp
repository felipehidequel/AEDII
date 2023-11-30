#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll sum_squares(ll n, int i = 1)
{
    if (i > n)
        return 0;

    return pow(i, 2) + sum_squares(n, i + 1);
}

ll sum_cubes(ll n, int i = 1)
{
    if (i > n)
        return 0;

    return pow(i, 3) + sum_cubes(n, i + 1);
}

int main()
{
    long long n;
    cin >> n;

    cout << "Recursive squares sum " << sum_squares(n) << endl;
    cout << "Recursive cubes sum " << sum_cubes(n) << endl;

    return 0;
}