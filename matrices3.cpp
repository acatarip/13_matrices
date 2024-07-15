#include <iostream>
using namespace std;
int main (){
    system("cls");
    int n;
    cout<<"Ingrese orden de la matriz: "; cin>>n;
    int nn=3*n;
    float A[n][nn];

    cout<<"La matriz de dimension "<<n<<"x3("<<n<<") es:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<nn; j++){
            if (i==0 || j==0 || i==n-1 || j==nn-1){
                A[i][j]=1;
            }
            else {
                A[i][j]=0;
            }
            cout<<A[i][j];
        }
        cout<<endl;
    }

    return 0;
}