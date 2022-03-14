#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m, p=0, i, j, v[100][100];
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for (i=1; i<=n; i++){
     for (j=1; j<=m; j++){
         cout << "v[" << i << "][" << j << "]=";
         cin >> v[i][j];
        }
    }
    for (i=2; i<=m; i++){
        for (j=1; j<=m; j++){
            if (v[i][n]=v[i][j]){
                cout << v[i][n] << "";
                p++;
            }
        }
    }
    if (p==0){
        cout << "nu exista";
    }

    return 0;
}
