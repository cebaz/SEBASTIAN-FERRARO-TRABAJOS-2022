#include <iostream>
using namespace std;

int d,v,p,r,pe;
int mat[4][3], mat2[4][3], mat3[4][3];

void RecoleccionDeInfo(){
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            cout<<"Plazas disponibles para el destino: "<<i<<" Vuelo: "<<j<<endl;
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<12;i++){
        cout<<"Numero de destino:"<<endl;
        cin>>d;
        cout<<"Numero de vuelo:"<<endl;
        cin>>v;
        cout<<"Numero de pedido"<<endl;
        cin>>pe;
        cout<<"Cantidad de pasajes requeridos:"<<endl;
        cin>>p;
        mat2[d][v]=p;
        mat3[d][v]=pe;
        if(mat2[d][v]>mat[d][v]){
            cout<<"NO HAY CANTIDAD DE PLAZAS DISPONIBLES"<<endl;
        }
    }
}

void CalcularYMostrarDatos(){
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            mat[i][j]-=mat2[i][j];
        }
    }
    cout<<"Pasajes sobrantes:"<<endl;
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            if(mat[i][j]>0){
                cout<<"Vuelo "<<j<<" Destino "<<i<<" Pedido "<<mat3[i][j]<<": "<<mat[i][j]<<endl;
            }
        }
    }
    cout<<endl;
    cout<<"Vuelos rechasados:"<<endl;
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            if(mat[i][j]<0){
                cout<<"Vuelo "<<j<<" Destino "<<i<<" Pedido "<<mat3[i][j]<<" Solicito: "<<mat2[i][j]<<endl;
                r+=1;
            }
        }
    }
    cout<<"Total de vuelos rechasados: "<<r<<endl;
}

int main(){
    RecoleccionDeInfo();
    CalcularYMostrarDatos();
}
