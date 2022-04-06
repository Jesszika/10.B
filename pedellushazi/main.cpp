#include <iostream>

using namespace std;

int main()
{
    int n, a[100], b[100], S_paratlan=0, S_paros=0;
    cout << "n=";
    cin >> n;
    for (int j=1; j<=n; j++){
        cout << "a[j]=";
        cin >> a[j];

      if (a[j]%2==0){
        S_paros=S_paros+a[j];
      }
   }
    for (int j=1; j<=n; j++){
        cout << "b[j]=";
        cin >> b[j];

      if (b[j]<S_paros && b[j]%2!=0){
        S_paratlan=S_paratlan+b[j];
      }
   }
    cout << "S_paratlan=" << S_paratlan;
    return 0;
}
