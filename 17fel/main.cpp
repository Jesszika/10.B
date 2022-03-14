#include <iostream>

using namespace std;

int main()
{
    int n, m, v[100][100], i, j;
    cin>> m >> n;
    for (i=0; i<n; i++){
        for (j=1; j<n-1; j++){
            v[i][j]=(i*j)%10;
        }
    }
    for (int i=1; i<m+1; i++){
        for (int j=0; j<n; j++){
            cout << v[i][j]<< "";
        }
      cout << endl;
    }

    return 0;
}
