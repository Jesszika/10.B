#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string v[100];
    vector<string>vektor;
    int n, k;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for (int i=0; i<n; i++){
        cin >> v[i];
     if (k>0){
        int hossz=v[i].size()-1;
     if (v[i][hossz]=='a'||v[i][hossz]=='e'||v[i][hossz]=='i'||v[i][hossz]=='o'||v[i][hossz]=='u'){
        k--;
       vektor.push_back(v[i]);
     }
     }
    }
     if (k>0){
        cout << "nu exista";
    }else{
     for(int i=0; i<vektor.size(); i++){
        cout<<vektor[i]<<endl;
     }
    }
    return 0;

}
