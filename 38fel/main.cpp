#include <iostream>

using namespace std;

int transformareBaza10(int b, int n){
int c=1, s=0;
while (n>0){
    int a;
    a=n%10;
    n=n/10;

 if (s==c){
    s=s+a*c;
    c=c*b;
 }
}

}


int main()
{
 cout << transformareBaza10(2, 10010) << endl;
 return 0;
 }
