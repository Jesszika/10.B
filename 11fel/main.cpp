#include <iostream>

using namespace std;

int main()
{
    int n, i, j, v[10];
    cout << "n=";
    cin >> n;
    for (i=0; i<=n; i++){
        for(j=0; j<=;j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for (i=1; i<=n; i++){
        cout << v[i][1] << " ";
    }
    for (j=2; j<=n; j++){
        cout << v[i][1] << " ";
    }
    for (i=n-1; i>=n; i--){
        cout << v[i][1] << " ";
    }
    for (j=n-1; j>=n; j--){
        cout << v[i][1] << " ";
    }
    cout << "" << endl;
    return 0;
}
