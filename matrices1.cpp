#include <iostream>
#include <string>
using namespace std;
int main (){
    int n;
    cout<<"Ingrese el orden de la matriz cuadrada: "; cin>>n;
    float A[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"Ingrese valor del elemento ["<<i+1<<", "<<j+1<<"]: "; cin>>A[i][j];
        }
    }
    float SS=0;
    cout<<"\tPara la matriz: \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (j>i){
                SS+=A[i][j];
            }
            cout<<A[i][j]<<" ";
            if (j==n-1){
                cout<<endl;
            }
        }
    }
    cout<<"La suma de los elementos por encima de su diagonal principal es "<<SS;

    return 0;
}