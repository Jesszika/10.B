#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, y, k=1;
    in >> x;
    while (in >> y){
        if(x>y){
            k++;
        }
    }
    cout << k;
    return 0;
}
