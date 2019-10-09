#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    int c=a*b;

    while (a!=b)
     {
       if (a>b) {
        a-=b;
       } else {
        b-=a;
       }

      }
    cout << "lkkt" << c;
    return 0;
}
