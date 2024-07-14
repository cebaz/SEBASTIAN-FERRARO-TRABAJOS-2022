#include<iostream>
using namespace std;

int r,e,v,m,g,var,aux;
int vec[8],vaux[5];
int mat[8][5];

void RecoleccionDedatos(){
    for (int i=0;i<8;i++){
        cout<<"Numero de revista:"<<endl;
        cin>>r;
        mat[i][0]=r;
        cout<<"Ejemplares vendidos:"<<endl;
        cin>>e;
        mat[i][1]=e;
        cout<<"Valor de venta de la revista:"<<endl;
        cin>>v;
        mat[i][2]=v;
        cout<<"Monto por publicidad"<<endl;
        cin>>m;
        mat[i][3]=m;
        cout<<"Gasto de edicion"<<endl;
        cin>>g;
        mat[i][4]=g;
    }
}

void CalculoGanaciaPerdida(){
    for (int i=0;i<8;i++){
        var=mat[i][1]*mat[i][2];
        var-=mat[i][3];
        var-=mat[i][4];
        vec[i]=var;
    }
}

void Ordenado(){
    for (int c=0;c<4;c++){
        for (int i=0;i<7;i++){
            if(vec[i]<vec[i+1]){
                aux=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
            for (int j=0;j<5;j++){
                if(vec[i]<vec[i+1]){
                    vaux[j]=mat[i][j];
                    mat[i][j]=mat[i+1][j+1];
                    mat[i+1][j+1]=vaux[j];
                }
            }
        }
    }
}

void MostrarDatos(){
    cout<<"|N-Revistas  |  Ej.vendidos  |  Recaudo Por venta  |  Costo de publicidad  |  Gastos de edicion  |  Ganancia o perdida"<<endl;
    for (int i=0;i<8;i++){
        cout<<"|     ";
        for (int j=0;j<5;j++){
            cout<<mat[i][j]<<"         |         ";
        }
        cout<<vec[i]<<endl;
    }
}

int main(){
    RecoleccionDedatos();
    CalculoGanaciaPerdida();
    Ordenado();
    MostrarDatos();
}
