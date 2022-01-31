#include <iostream>

using namespace std;

int main()
{
int v[100][100], j, n, k;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        v[i][i]==(i+1)*k;
    }
    for(int i=0; i<n; i++){
      for(j=i+1; j<n; j++){
          v[i][j]=v[i][j-1] + 1;
          }
      for (j=i-1; j>=0; j--){
            v[i][j]=v[i][j+1] - 1;
          }
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout << v[i][j] << "";
    }
  cout << endl;
  }
  return 0;
}
