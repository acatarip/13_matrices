#include <iostream>
using namespace std;
int main (){
    system("cls");
    int n;
    cout<<"Ingrese orden de la matriz: "; cin>>n;
    float A[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"Ingrese valor del elemento ["<<i+1<<", "<<j+1<<"]: "; cin>> A[i][j];
        }
    }

    return 0;
}