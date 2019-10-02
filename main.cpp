#include <iostream>

using namespace std;

int main()
{
 int a, i=1;
 double S=0;

 for (i=0; i<10; i++) {
   cout << "a=";
   cin >> a;
   S=S+a;

 }
 S=S/10;

    cout << "az atlag" << S;
    return 0;
}
