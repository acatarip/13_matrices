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

    return 0;
}