#include <iostream>
using namespace std;

int cmmnr(int n){

    int a[11], ind = 0;
    while(n){
        a[++ind] = n % 10;
        n/=10;
    }

    for(int i = 1; i < ind; ++i)
        for(int j = i + 1; j <= ind; ++j)
            if(a[i] < a[j])
             {
               int aux=0;
               aux=a[i];
               a[i]=a[j];
               a[j]=aux;
             }

    for(int i = 1; i <= ind; ++i)
        n = n * 10 + a[i];

    return n;
}
int main ()
{
  int n;
  cin>>n;
  cout<<cmmnr(n);
}
