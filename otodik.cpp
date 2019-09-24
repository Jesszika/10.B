#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    if (a>=b) {
        if (a>=c) {
            cout <<"legnagyobb szam:" << a <<endl;
        } else { cout <<"legnagyobb szam:" << c <<endl;
        }
    } else {
        if (b>=c) {
            cout  <<"legnagyobb szam:" << b <<endl;
         } else { cout <<"legnagyobb szam:" << c <<endl;
        }
    }
    return 0;
}
