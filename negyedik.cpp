#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e, f, S, P;
    S=0;
    P=0;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    cout << "d:";
    cin >> d;
    cout << "e:";
    cin >> e;
    cout << "f:";
    cin >> f;
    if (a%2=0) {
      S=S+a;
      } else {
      P=P+a;
      }
      if (b%2=0) {
      S=S+b;
      } else {
      P=P+b;
      }
      if (c%2=0) {
      S=S+c;
      } else {
      P=P+c;
      }
      if (d%2=0) {
      S=S+d;
      } else {
      P=P+d;
      }
      if (e%2=0) {
      S=S+e;
      } else {
      P=P+e;
      }
      if (f%2=0) {
      S=S+f;
      } else {
      P=P+f;
      }
    cout << "paros szamok osszege=" << S << endl;
    cout << "paratlan szamok osszege=" << P << endl;
    return 0;
}
