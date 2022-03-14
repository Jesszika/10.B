#include <iostream>

using namespace std;

int main()
{
    int n, x, y, i, v[100];
    v[0]=1, v[1]=1;
    cout << "n=";
    cin >> n;
    for (i=2; i<n; i++){
        v[i]=3*v[i-1]-v[i-2];
    }
    cout << v[i-1] << endl;
    return 0;
}
