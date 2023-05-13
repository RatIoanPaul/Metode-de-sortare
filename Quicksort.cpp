#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int pozitioneaza(int arr[],int inceput,int sfarsit){
    int pivot=arr[sfarsit];
    int i=(inceput-1),aux;
    for(int j=inceput;j<=sfarsit-1;j++){
        if (arr[j]<pivot){
            i++;
            aux=arr[i];
            arr[i]=arr[j];
            arr[j]=aux;
        }
    }
    aux=arr[i+1];
    arr[i+1]=arr[sfarsit];
    arr[sfarsit]=aux;
    return(i+1);
}
void quickSort(int arr[], int inceput, int sfarsit){
    if(inceput<sfarsit){
    int pi=pozitioneaza(arr,inceput,sfarsit);
    quickSort(arr,inceput,pi-1);
    quickSort(arr,pi+1,sfarsit);
    }
}
void printArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++)
        g<<arr[i]<< " ";
    cout<<endl;
}
int main(){
    int arr[1001],n=-1,x;
    while(f>>x)
        arr[++n]=x;
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
