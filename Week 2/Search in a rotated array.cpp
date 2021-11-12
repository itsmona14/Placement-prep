https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

class Solution{
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
        if(l > h)
            return -1;
            
        int mid = (l+h)/2;
        
        //target found
        if(A[mid] == key)
            return mid;
        //search in left subarray   
        if(A[mid] >= A[l]){
            if(A[mid] >= key && A[l] <= key)
                return search(A, l , mid-1,key);
            return search(A, mid+1, h,key);
        }
        //search in right subarray
        if(A[mid] <= key && A[h] >= key)
            return search(A, mid+1, h,key);
        return search(A, l , mid-1,key);

    }
};
