#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a, m;
    ifstream in("bac.txt");
    in >> n;
    for (int i=1; i<=n; i++){
        in >> a;
        if (a>m){
            m=a;
            }

    cout << m << "";
    }
    return 0;
}
