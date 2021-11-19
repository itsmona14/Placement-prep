https://practice.geeksforgeeks.org/problems/maximum-product-subarray/0

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long product = 1;
	    long long maximum = arr[0];
	    for(int i = 0 ; i < n ; i++){
	        product *= arr[i];
	        maximum = max(product, maximum);
	        if(product == 0)
	            product = 1;
	    }
	    product = 1;
	    for(int i = n-1 ; i >= 0 ; i--){
	        product *= arr[i];
	        maximum = max(product, maximum);
	        if(product == 0)
	            product = 1;
	    }
	    return maximum;
	}
};
