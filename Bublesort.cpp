#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int main(){
    long long v[100001],n=-1,i,x,aux;
    bool ordonat;
    while(f>>x)
        v[++n]=x;
    do{
        ordonat=true;
        for(i=0;i<n;i++)
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ordonat=false;
            }
    }while(ordonat==false);
    for(i=0;i<=n;i++)
        g<<v[i]<<" ";
return 0;
}
