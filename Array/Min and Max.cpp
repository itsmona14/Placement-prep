https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    long long min = INT_MAX;
    long long max = INT_MIN;
    for(long long i = 0 ; i<n; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    p.first = min;
    p.second = max;
    return p;
}
