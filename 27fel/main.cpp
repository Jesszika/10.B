#include <iostream>

using namespace std;

int main()
{
    int n, i, k, j, v[100][100];
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> n;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for (j=0; j<n; j++){
       cout << v[k][j];
    for (j=0; j<n; j++){
       cout << v[j][k];
    }


    }
    cout << "" << endl;
    return 0;
}
