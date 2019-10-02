#include <iostream>

using namespace std;

int main()
{
 int a, i=1;
 double S=0;

 while (i<10){
   cout << "a=";
   cin >> a;
   S=S+a;
   i++;

 }
 S=S/10;

    cout << "az atlag" << S;
    return 0;
}
