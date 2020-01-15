#include <iostream>

using namespace std;

int main()
{
  int tomb1[100];
  int tomb2[100];
  int i, c, d, j, N, M, S=0;
  cout << "N=";
  cin >> N;
  cout << "M=";
  cin >> M;
  for (i=0; i<N; i++) {
    cout << "tomb1["<< i << "]=";
    cin >> tomb1[i];
    }
  for (i=0; i<M; i++) {
    cout << "tomb2["<< j << "]=";
    cin >> tomb2[j];
    }
  if (tomb1[i]==tomb2[j]) {
    S+=tomb1[i];
  }
  while (S>0) {
    c=S%10;
    S=S/10;
    d=d*10+c;
  }

    cout << "osszeg=" << S;
    return 0;
}
