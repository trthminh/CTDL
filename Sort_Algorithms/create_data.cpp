#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;
double a[MAX + 2];
double Random(double mn, double mx)
{
    double tmp = (double)rand() * rand();
    tmp = tmp / ((double)RAND_MAX * RAND_MAX);
    return mn + tmp * (mx - mn);
}
int main()
{
    srand(time(NULL));
    freopen("dulieu.inp", "w", stdout);
    for (int j = 1; j <= 10; ++j)
    {
        cout.precision(3);
        for (int i = 1; i <= MAX; ++i)
        {
            double range_random = Random(0.0, MAX);
            a[i] = Random(-range_random, range_random);
        }

        if (j == 1)
            sort(a + 1, a + 1 + MAX);
        else if (j == 2)
            sort(a + 1, a + 1 + MAX, greater<double>());

        for (int i = 1; i <= MAX; ++i)
            cout << fixed << a[i] << " ";
        cout << '\n';
    }

    return 0;
}
