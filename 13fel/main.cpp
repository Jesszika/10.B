/*Írjon egy C/C++ programot amely beolvas a billentyűzetről egy n (n∈[2,20]) természetes számot és
felépít a memóriában egy olyan kétdimenziós tömböt, amelynek n sora és n oszlopa van úgy, hogy
minden sor a következő jellemzőkkel rendelkezzen:
• a mellékátlón levő elem értéke n;
• a mellékátlótól balra haladva és a mellékátlótól jobbra haladva is az elemek egymásutáni értékek,
szigorúan csökkenő sorozatot alkotva!
A program írja ki a képernyőre a felépített tömböt úgy, hogy minden sorát külön sorba
írja, és egy soron belül az elemek szóközzel legyenek elválasztva!
Példa: ha n=5 a mellékelt tömb legyen kiírva.*/

#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100];
    cout << "n=";
    cin >> n;
    v[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i+j == n-1){
               v[i][j]=n;
            }
        }
    }

    cout << "" << endl;
    return 0;
}
