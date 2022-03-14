#include <iostream>

using namespace std;

int main()
{
    int  S=1;
    bool prim = true;
    cout << "a=";
    cin >> a;

    for (oszto=2; oszto<a/2+1; oszto++){
      if (a%oszto==0) {
        prim = false;
      }else{
        prim = true;
       }
    }
    cout << a << endl;
    return 0;
}
