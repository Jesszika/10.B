#include <iostream>

using namespace std;

int main()
{
    int n, k, v[100], i, szam=0;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for (i=0; i<n; i++){
      int a=0;
      cout << "v[i]=";
      cin >> v[i];
        while (v[i]!=0){
         v[i]=v[i]/10;
         a++;
     }
        if (a>k){
         szam++;

     }
 }
   cout << szam << endl;
   return 0;
}
