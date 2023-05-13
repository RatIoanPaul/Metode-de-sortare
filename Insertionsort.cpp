#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int main(){
    long long v[100001],n=-1,i,j,x,aux;
    while(f>>x)
        v[++n]=x;
    for(i=1;i<=n;i++){
        aux=v[i];
        j=i-1;
        while(j>=0 && v[j]>aux){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=aux;
    }
    for(i=0;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
