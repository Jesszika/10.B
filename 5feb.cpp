#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int  n, i, v[100], j, min=INT_MAX, max=-INT_MAX;
    srand(time(NULL));
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++) {
      v[i]=rand()%100;
      cout << v[i] << "";
    }
    for (i=0; i<5; i++) {
    cout << "v[" << i << "]=";
    cin >> v[i];


    if (v[i]>max) {
      max=v[i];
    }
    if (v[i]<min) {
      min=v[i];
     }
    }



      v[i]=max;
       int b= min;
    while(v[i]!=v[j]) {
      if (v[i]>v[j]) {
       v[i]-=v[j];
      } else {
       v[j]-=v[i];
      }
    }
  cout << v[i] << "";

    return 0;
}
