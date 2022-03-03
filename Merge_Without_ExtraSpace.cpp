#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i = n-1;
	    int j = 0;
	    //as both array is sorted then we will check from the ending of the first array ...
        //we will compare if ending element of array is less than the i'th element of second array...if "yes" --> then we will swap them
        //else break;
	    while(i >= 0 && j < m)
	    {
	        if(arr2[j] < arr1[i]){
	            swap(arr1[i],arr2[j]);
	            i--;
	            j++;
	        }
	        else
	            break;
	    }
	    

        //after swapping all the elements...sort both the arrays :)
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }

        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} 