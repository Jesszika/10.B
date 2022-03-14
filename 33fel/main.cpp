#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, v[100][100];
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for (i=1; i<=n; i++){
        for (j=1; j<=n*k; j++){
            v[i][j]=i+(j-1)/k;
        }
    }
     for (i=1; i<=n; i++){
        for (j=1; j<=n*k; j++){
           cout<< v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
