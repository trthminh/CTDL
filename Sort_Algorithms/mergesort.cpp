void Merge(float a[], int l, int m, int r)
{
    int le_sz = m - l + 1;
    int ri_sz = r - m;
    float *aleft = new float[le_sz + 2];
    float *aright = new float[ri_sz + 2];
    for (int i = 1; i <= le_sz; ++i)
        aleft[i] = a[l + i - 1];
    for (int i = 1; i <= ri_sz; ++i)
        aright[i] = a[m+i];
    int id_l = 1;
    int id_r = 1;
    int id_m = l;
    while (id_l <= le_sz && id_r <= ri_sz)
    {
        if (aleft[id_l] <= aright[id_r])
            a[id_m++] = aleft[id_l++];
        else
            a[id_m++] = aright[id_r++];
    }
    while (id_l <= le_sz)
        a[id_m++] = aleft[id_l++];
    while (id_r <= ri_sz)
        a[id_m++] = aright[id_r++];
}
void mergesort(float a[], int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    mergesort(a, l, m);
    mergesort(a, m + 1, r);
    Merge(a, l, m, r);
}
