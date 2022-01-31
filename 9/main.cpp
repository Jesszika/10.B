#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int v[11]={0}, x, s=0;
    while (f>>x){
        v[x]++;
    }
    cout << "Hello world!" << endl;
    return 0;
}
