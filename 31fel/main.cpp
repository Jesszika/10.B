#include <iostream>

using namespace std;

int main()
{
    string v[100];
    int i, n, k, c=0;
    string a="aeiou";
    string b[100];
    cout <<"n=";
    cin  >> n;
    cout << "k=";
    cin >> k;
    for (i=0; i<n; i++){
        cout << "v[i]=";
        cin >> v[i];
    }
    for (i=0; i<n; i++){
        for (int j=0; j<a.size(); j++){
              int u=v[i].size();
              if (v[i][u-1]==a[j]){
                b[c]=v[i];
                c++;
              }
            }
            cout << endl;
            cout << endl;
        if (c>=k){
        for (i=0; i<k; i++){
                cout << b[i] << " ";
                            }else{
            cout << "nu exista";
            }




    }
    return 0;
}
