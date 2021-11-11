https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1

class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static int comp(string a,string b){
	    string ab,ba;
	    
	    ab = a.append(b);
	    ba = b.append(a);
	    
	    return ab.compare(ba) > 0? 1 : 0;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    string res = "";
	    sort(arr.begin(),arr.end(),comp);
	    
	    for(int i = 0;i < arr.size(); i++){
	        res += arr[i];
	    }
	    
	    return res;
	}
};
