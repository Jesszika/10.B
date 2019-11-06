#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, oszto;
    cout << "e=";
    cin >> e;
    cout << "f=";
    cin >> f;


    for (a=e; a<f; a++) {
     d=0;
     b=a;

    while (b>0) {
     c=b % 10;
     b=b / 10;
     d=d*10+c;for (a=e; a<f; a++)
     }
     if (a==d) {
       h=1;
     }

     for (oszto=2; oszto<a/2+1; oszto++) {
     if (a%oszto==0) {
        g=0;
      }

     }

    }
    if (h==1 && g==1) {
    cout << a << endl;
    }
    return 0;
}
