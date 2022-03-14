#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n, m, i, j, szamlalo=0;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for (i=1; i<=m; i++){
        for (j=1; j<=n; j++){
            cout << "v["<< i << "][" << j << "]=";
            cin >> v[i][j];
    }
    }
    for (j=1; j<=n; j++){
            bool jo=true;
        for (i=1; i<=m; i++){
            if (v[i][1]==v[i][j+1]){
                jo=false;

            }else{
            szamlalo++;
            }
        }

    }

    cout << szamlalo;
    return 0;
}

