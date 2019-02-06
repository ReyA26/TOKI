#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t; cin >> t;
    int jumlah;
    int *arr=new int[t];
    for(int i=0; i<t; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<t; i++)
    {
        int x;
        x=arr[i];
        jumlah=2*(x*x)+((x-2)*(x-2)*2)+(2*(x*(x-2)));
        cout << jumlah << endl;
    }
    return 0;
}
