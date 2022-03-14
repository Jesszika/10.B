#include <iostream>

using namespace std;


void fii(int n){
for (int i=1; i<n; i++){
    if (n%i==0){
       cout << "(" << i << "" << n/i << ")";

        }
    }
}

int main()
{
    fii (12);
    return 0;
}
