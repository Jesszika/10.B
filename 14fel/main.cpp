#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, n, posmin=0, posmax=0, nr=0;
    ifstream in("bac.in");
    while (in >> x){
        nr++;
        if (x>0 && posmin==0){
            posmin=nr;
            posmax=nr;
        }else if (x>0){
        posmax=nr;
        }
    }
    if (nr-(posmin-1)>posmax){
        cout << nr-(posmin-1);
    }else{
    cout << posmax << endl;
    }
    return 0;
}
