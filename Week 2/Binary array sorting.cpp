https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1#

void binSort(int A[], int N)
{
    int right = 0;
    int left = 0;
    int temp;
    
    while(right < N){
        if(A[right] == 1)
            right++;
        else{
            temp = A[right];
            A[right] = A[left];
            A[left] = temp;
            
            right++;
            left++;
        }
    }
}
