#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, S, P;
    cout << "b=";
    cin >> b;
    S=0;
    P=1;

    while (b>0) {
     c=b % 10;

    if (c%4==0) {
      S+=c;
      }
    if (c%5!=0) {
      P*=c;
      }
      b=b / 10;
      }
     cout << "a 4-el oszthato szamok osszege=" << S << endl;
     cout << "az 5-el nem oszthato szamok szorzata=" << P << endl;


    return 0;
}
