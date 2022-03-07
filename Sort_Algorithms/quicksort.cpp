void quicksort(vector<double> &a, int l, int r)
{
    if(l >= r) return;
    int le_index = l;
    int ri_index = r;
    double pivot = a[(l + r)/2];
    while(le_index <= ri_index)
    {
        while(a[le_index] < pivot ) le_index++;
        while(a[ri_index] > pivot ) ri_index--;
        if(le_index <= ri_index)
        {
            swap(a[le_index], a[ri_index]);
            le_index++;
            ri_index--;
        }
    }
    if(l < ri_index)
        quicksort(a, l, ri_index);
    if(le_index < r)
        quicksort(a, le_index, r);
}
