#include <bits/stdc++.h>
using namespace std;

//KADEN'S ALGORITHM

void rotate(int arr[], int n)
{
  vector<int> v;
  
  //We will add the elements of array in a vector as it is till second last element

  for(int i=0 ; i<(n-1) ; i++){
      v.push_back(arr[i]);
  }

  //Then add the last element of array to the front of the vector
  v.insert(v.begin(),arr[n-1]);
  

  //Then copy the vector elements to the original array to return to the main function
  for(int i=0 ; i<n ; i++){
      arr[i] = v[i];
  }
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin >> a[i];

        rotate(a, n);

        for (int i=0 ; i<n ; i++)
            cout << a[i] << " ";

        cout << endl;
    }
        return 0;
}
