#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, v[100][100], aux;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for (i=1; i<=n; i++){
        for(j=1; j<=n;j++){
            cout<<v[i][j];
        }
        ]
     aux=v[k][k-1];
     for (j=k-1; j>=2; j--){
        v[k][j]=v[k][j-1];
     }
     v[k][1]=aux;
    cout << endl;
    for(i=1; i<=n; i++){
        for(j=1;j<=n;)
    }
     }
    }
    cout << endl;
    return 0;
}
