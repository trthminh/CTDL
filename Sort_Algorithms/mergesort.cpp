void Merge(vector<double> &a, int l, int m, int r)
{
    int nl = m - l + 1;
    int nr = r - m;
    vector < double > L, R;
    L.resize(nl);
    R.resize(nr);
    for (int i = 0; i < nl; ++i)
        L[i] = a[l + i];
    for (int i = 0; i < nr; ++i)
        R[i] = a[m + 1 + i];
    int n = l;
    int i = 0, j = 0;
    while (i < nl && j < nr)
    {
        if (L[i] <= R[j])
            a[n++] = L[i++];
        else a[n++] = R[j++];
    }
    while (i < nl)
        a[n++] = L[i++];
    while (j < nr)
        a[n++] = R[j++];
}

void mergesort(vector<double> &a, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        Merge(a, l, m, r);
    }
}
