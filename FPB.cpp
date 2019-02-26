#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long t; cin >> t;
    for(long long i=1; i<=t; i++)
    {
        long long a; cin >> a;
        long long b; cin >> b;
        long long x1;
        long long x2;
        long long x;
        x=abs(a-b)/(7+5);
        x1=(x*7)+a;
        x2=b-(x*5);
        if(x1==x2)
        {
            cout << "Case #" << i << ": " << x1 << endl;
        }
        else
        	cout << "Case #" << i << ": impossible" << endl; 
    }
    return 0;
}
