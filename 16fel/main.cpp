#include <iostream>

using namespace std;


    int identice(int n){
    int a=1;
    while (n>9){
        if (n%10!=(n/10)%10){
            a=0;
            return 0;
            break;
        }
        n=n/10;
    }
    return 1;
    }
    int main()
{
    cout << identice(2212) << endl;
    return 0;
}
