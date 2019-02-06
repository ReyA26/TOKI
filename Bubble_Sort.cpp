#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++&&j!=i)
        {
            if(arr[i]<arr[j])
            {
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
