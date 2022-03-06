int solve(float a[], int l, int r)
{
    int m = (l + r) / 2;
    float pivot = a[m];
    int i = l - 1;
    for (int j = l; j <= r; ++j)
    {
        if (a[j] < pivot && j != m)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[m]);
    return (i + 1);
}

void quicksort(float a[], int l, int r)
{
    if (l < r)
    {
        int en = solve(a, l, r);
        quicksort(a, l, en - 1);
        quicksort(a, en + 1, r);
    }
}
