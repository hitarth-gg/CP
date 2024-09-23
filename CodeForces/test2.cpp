void heapify(v, n, i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && v[left] > v[largest])
        largest = left;
    ...

    if(largest != i)
    {
        swap(v[largest], v[i])

        heapify(v, n, largest)
    }
}

heapsort()
{
    for(int i = n/2 - 1; i>=0; i--)
        heapify(v, n, i)

    for(int i = n-1; i>0; i--)
    {
        int temp = v[0];
        v[0] = v[i];
        v[i] = temp;
        heapify(v, i, 0);
    }
}
