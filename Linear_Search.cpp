#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int d; cin >> d;
    int j=0;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    while(arr[j]!=d&&j<n)
    {
        j++;
    }
    if(j==n)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << j << endl;
    }
    return 0;
}
