#include <iostream>

using namespace std;

int main()
{
    int n, i, j, v[100][100];
    cout<<"n=";
    cin>>n;
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            v[i][j]= i*j%10;
            cout<< v[i][j];
            cout<< " ";
        }
    cout <<  endl;
    }

    return 0;
}
