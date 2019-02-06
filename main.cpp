#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int n; cin >> n;
        int m; cin >> m;
        int c=n*m;
        int **arr=new int *[m]; 
        for(int j=0;j<m;j++){
            arr[j]=new int [n];
            for (int k=0; k<n; k++)
            {
                cin >> arr[j][k];
            }
        }
        int *jml = new int[n];
        int duwur = 0;
        for (int j = 0; j < n; j++)
        {
            jml[j] = 0;
            for (int k = 0; k < m; k++)
            {
                jml[j] += arr[k][j];
            }
            if (jml[j] > jml[duwur])
            {
                duwur = j;
            }
        }
        cout << duwur+1 << endl;
    }
    return 0;
}