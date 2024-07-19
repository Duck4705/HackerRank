long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n,0);
    for (int i = 0; i < queries.size(); i++)
    {
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        arr[a - 1] += k;

        if(b < n)
        {
            arr[b] -= k;
        }
    }

    long max = 0;
    long sum = 0;
    for(int i = 0; i < n; i ++)
    {
        sum+= arr[i];
        if(sum > max) max = sum;
    }
    return max;
}
