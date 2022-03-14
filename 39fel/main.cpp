#include <iostream>

using namespace std;

int main()
{

    string text;
    string megoldas;
    getline (cin ,text);
    int n;
    bool kiir=true;
    for (int i=0; i<text.size(); i++){
        if (text[i]==','){
          kiir=false;
        }
        if (text[i]== ' '){
            kiir=true;
        }
        if(kiir){
            megoldas=megoldas+text[i];

        }
    }
    text=megoldas;
    cout << text << endl;
    return 0;
}
