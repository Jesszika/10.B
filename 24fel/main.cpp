#include <iostream>

using namespace std;


    int armonie(int x, int y){
        int S1=0, S2=0;
     for(int i=1; i<x+1; i++){
        if(x%i==0){
           S1=S1+i;
        }
     for(int j=1; i<y+1; j++){
        if(y%j==0){
           S2=S2+j;
        }
     }
     if (S1<S2){
      if ((x+y)>S1 && (x+y)<S2){
        return 1;
      }else{
        return 0;
        }
     }
     if (S1>S2){
      if ((x+y)>S2 && (x+y)<S1){
        return 1;
      }else{
        return 0;
        }

     }
    }
    }
    int main()
{
    cout << armonie(8, 13);
    return 0;
}

