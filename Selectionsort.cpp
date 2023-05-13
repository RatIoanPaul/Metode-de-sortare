#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int main(){
    long long v[100001],n=-1,i,j,x,aux;
    while(f>>x)
        v[++n]=x;
    for(i=0;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=0;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
