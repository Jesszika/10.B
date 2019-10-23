#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "a=";
    cin >> a;

    d=0;
    b=a;

    while (b>0) {
     c=b % 10;
     b=b / 10;
     d=d*10+c;
     }

    if (a==d) {
      cout << "A szam pallindrom" << endl;
     } else {
      cout << "A szam nem pallindrom" << endl;
     }

    return 0;
}
