#include<bits/stdc++.h>
using namespace std;

/* Check if adding x and y results in overflow.
   If overflow, return true(1).
   Otherwise, store the sum in res and return false(0) */
bool addOverflow(int x, int y, int &res)
{
    int temp = x + y;
    if(x>0 && y>0 && temp<0)
        return 1;
    if(x<0 && y<0 && temp>0)
        return 1;
    
    res = x + y;
    return 0;
}

int main()
{
    int x, y, res = 0;

    x = 45; y = 2147483647;
    cout<<"Overflow(0/1): "<<addOverflow(x, y, res)<<endl;
    cout<<"Result: "<<res<<endl;

    x = 45; y = 10;
    cout<<"Overflow(0/1): "<<addOverflow(x, y, res)<<endl;
    cout<<"Result: "<<res<<endl;

    return 0;
}

