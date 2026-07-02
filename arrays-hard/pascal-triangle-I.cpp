// pascal triangle I 
// TC = O(min(c, r-c))  SC = O(1)


/* To find the element at the coordinates (R,C) 
where R is the row number and C is the Column number */

#include <bits/stdc++.h>
using namespace std;

long long pascalI(int r, int c){
    long long ans = 1;

    int n = r-1;
    int k = c-1;

    // compute C(n,k) using iterative formula
    for(int i=0; i<k; i++){
        ans = ans * (n-i);
        ans = ans / (i+1);
    }

    return ans;
}

int main(){
    int r = 5, c = 3;

    long long res = pascalI(r, c);
    cout << "Element at (" << r << "," << c << ") is " << res << endl;

    return 0;
}
