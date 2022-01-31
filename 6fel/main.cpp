#include <iostream>

using namespace std;

int main()
{
   int n, m, v[10][10];
   cout << "n=";
   cin >> n;
   cout << "m=";
   cin >> m;
   for (int i=0; i<=n; i++){
    for (int j=0; j<=m; j++){
        for(int o=1; o<=2*n*m; o++){
            if (o%2==0){
                v[i][j]=o*o;

            }
        }
    }
   }
   for (int i=0; i<=m; i++){
    for (int j=0; j<m; j++){
        cout << v[i][j];
    }
   }
    return 0;
}
