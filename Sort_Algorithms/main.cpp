#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include "heapsort.cpp"
#include "mergesort.cpp"
#include "quicksort.cpp"
const int MAX = 1e6;
float a[MAX + 3];
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
//    cout << "Algorithms    " << "Test1    " << "Test2    " << "Test3    " << "Test4    " << "Test5    "<< "Test6    " << "Test7    " << "Test8    " << "Test9    " << "Test10    " ;
//    cout << "HeapSort      " << "Test1    " << "Test2    " << "Test3    " << "Test4    " << "Test5    "<< "Test6    " << "Test7    " << "Test8    " << "Test9    " << "Test10    " ;
//    cout << "MergeSort     " << "Test1    " << "Test2    " << "Test3    " << "Test4    " << "Test5    "<< "Test6    " << "Test7    " << "Test8    " << "Test9    " << "Test10    " ;
//    cout << "QuickSort     " << "Test1    " << "Test2    " << "Test3    " << "Test4    " << "Test5    "<< "Test6    " << "Test7    " << "Test8    " << "Test9    " << "Test10    " ;
//    cout << "Sort_C++      " << "Test1    " << "Test2    " << "Test3    " << "Test4    " << "Test5    "<< "Test6    " << "Test7    " << "Test8    " << "Test9    " << "Test10    " ;
    cout << "           " << "HeapSort  " << "MergeSort " << "QuickSort " << "Sort_C++" << '\n';
    for (int j = 1; j <= 10; ++j)
    {
        for (int i = 1; i <= MAX; ++i)
            cin >> a[i];
        double st, en;
        st = clock();
        heapsort(a, MAX);
        en = clock();
        if (j < 10)
            cout << "Test " << j << "      ";
        else cout << "Test " << j << "     ";
        format(get_time(st, en));
        cout << "     ";
        st = clock();
        mergesort(a, 1, MAX);
        en = clock();
        format(get_time(st, en));
        cout <<"     ";
        st = clock();
        quicksort(a, 1, MAX);
        en = clock();
        format(get_time(st, en));
        cout << "     ";
        st = clock();
        sort(a+1, a+1+MAX);
        en = clock();
        format(get_time(st, en));
        cout << "     ";

        cout << '\n';
    }
    return 0;
}
