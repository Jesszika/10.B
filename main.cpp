
#include <iostream>

using namespace std;

int main()

{
int n, i, a, S=0, P=0;
double db=0, v=0;
cout << "n=";
cin >> n;

for (i=0; i<n; i++) {
   cout << "a=";
   cin >> a;
   if (a%2==0) {
   S+=a;
   db++;
   } else {
   P+=a;
   v++;
  }

 }

  cout << S/db << endl;
  cout << P/v << endl;

    return 0;
  }

