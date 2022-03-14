/*A factori alprogramnak két paramétere van n és m, amelyeken keresztül egy-egy természetes számot
kap az [1,109] intervallumból. Az alprogram visszatéríti azon prímszámok számát, amelyek ugyanazon a
hatványon jellennek meg úgy az n, mint az m prímtényezőkre bontásában.
Írja le az alprogram teljes definícióját.
Például: ha n=16500 és m=10780, akkor a visszatérített érték 2 (16500=2235311,
10780=2257211).*/

#include <iostream>

using namespace std;

int factori (int n, int m){
     int num=0;
     for(int i=2; i<=n && i<=m; i++){
      int numN=0, numM=0;
      while (n%i==0){
        numN++;
        n/=i;
      }
      while (m%i==0){
        numM++;
        m/=i;
      }
      if (numM == numN &&numM!=0){
        num++;
      }
     }
     return num;
}
int main()
{

    cout << factori(16500, 10780);
    return 0;
}
