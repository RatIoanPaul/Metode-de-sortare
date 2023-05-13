#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int main(){
long long v[1001],w[1001],k[1001]={0},n=-1,i,j,x,aux;
double start,stop;
    while(f>>x)
        v[++n]=x;
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
            if(v[j]<v[i])k[i]++;
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
            if(k[j]==i)w[i]=v[j];
    for(i=0;i<=n;i++)
        v[i]=w[i];
    for(i=0;i<=n;i++)
        g<<v[i]<<" ";
return 0;
}
