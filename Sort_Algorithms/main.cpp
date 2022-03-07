#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include "heapsort.cpp"
#include "mergesort.cpp"
#include "quicksort.cpp"
const int MAX = 1e6;

double get_time(double st, double en)
{
    return (en - st) / CLOCKS_PER_SEC;
}
void format(double tg)
{
    cout << setprecision(3) << fixed << tg;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("dulieu.inp", "r", stdin);
    freopen("result.out", "w", stdout);
    srand(time(NULL));
    cout << "           " << "HeapSort  " << "MergeSort " << "QuickSort " << "Sort_C++" << '\n';
    for (int j = 1; j <= 10; ++j)
    {
        vector <double> a;
        for (int i = 1; i <= MAX; ++i)
        {
            double x;
            a.push_back(x);
        }
        double st, en;
        st = clock();
        heapsort(a, a.size());
        en = clock();
        if (j < 10)
            cout << "Test " << j << "      ";
        else cout << "Test " << j << "     ";
        format(get_time(st, en));
        cout << "     ";
        st = clock();
        mergesort(a, 0, a.size() - 1);
        en = clock();
        format(get_time(st, en));
        cout <<"     ";
        st = clock();
        quicksort(a, 0, a.size() - 1);
        en = clock();
        format(get_time(st, en));
        cout << "     ";
        st = clock();
        sort(a.begin(), a.end());
        en = clock();
        format(get_time(st, en));
        cout << "     ";

        cout << '\n';
        a.clear();
    }
    return 0;
}
