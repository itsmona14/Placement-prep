https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],long long left, long long mid, long long right){
        long long temp[right+1];
        long long i, j , k;
        long long inv = 0;
        i = left;
        j = mid ;
        k = left;
        while(i <= mid - 1 && j <= right){
            if(arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else{
                temp[k++] = arr[j++];
                inv += (mid - i);
            }
        }
        
        while(i <= mid - 1)
            temp[k++] = arr[i++];
        while(j <= right)
            temp[k++] = arr[j++];
        for(int i = left ; i <= right; i++)
            arr[i] = temp[i];
        
        return inv;
    }
    long long int merge_sort(long long arr[],long long left,long long right){
        
        long long mid;
        long long int inv = 0;
        if(left < right){
            mid = (left + right) / 2;
            inv += merge_sort(arr,left,mid);
            inv += merge_sort(arr,mid+1,right);
            inv += merge(arr,left,mid+1,right);
        }
        
        return inv;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        
        return merge_sort(arr,0,N-1);
        
    }

};
