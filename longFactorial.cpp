#include <bits/stdc++.h>
using namespace std;

long int Fact(long int n){
    //Base condition
    if(n <= 1){
        return 1;
    }
    else{
        //Recursive function
        return n * Fact(n-1);
    }
}

int main()
{
    long int n;
    cin >> n;

    cout << "factorial : " << Fact(n) << endl;
}