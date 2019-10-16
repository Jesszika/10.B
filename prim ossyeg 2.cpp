#include <iostream>

using namespace std;

int main()
{
    int S=0, i, n;
    cout << "n=";
    cin >> n;
    for (i=0, i<n, i++)
    {

    int a, oszto;
    bool prim = true;
    cout << "a=";
    cin >> a;

    for (oszto=2; oszto<a/2+1; oszto++)
     {
       if (a%oszto==0)
        {
         prim = false;
        }
     }
    if (prim)
      {
      S=S+a;
      }
     }
    cout <<S<<endl;
    return 0;
}
