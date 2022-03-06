void heap_max(float a[], int i, int n)
{
    int mx = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (l < n && a[l] > a[mx])
        mx = l;
    if (r < n && a[r] > a[mx])
        mx = r;
    if (mx != i)
    {
        swap(a[i], a[mx]);
        heap_max(a, mx, n);
    }
}
void heapsort(float a[], int n)
{
    // Sap tu root truoc
    for (int i = n / 2 - 1; i >= 1; --i)
        heap_max(a, i, n);
    for (int i = n; i > 1; --i)
    {
        swap(a[1], a[i]);
        heap_max(a, 1, i);
    }
}
