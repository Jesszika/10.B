#include <iostream>
#include <fstream>

using namespace std;
int main()
{
ifstream in("bac.txt");
int prev, szamlalo=1, szam;
while (in>>szam){
    if (prev==szam){
        szamlalo++;
    }else{
    if (szamlalo==2){
    cout << szam << "";
    }else{
    szamlalo=1;
    } }
    prev=szam;
}
if(szamlalo==2){
    cout << prev;
}
    return 0;
}
