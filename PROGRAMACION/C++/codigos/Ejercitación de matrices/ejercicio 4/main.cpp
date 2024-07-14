#include <iostream>
#include <stdlib.h>
using namespace std;

int op,y=0,a,s,c;
int mat[5][3]{0};

void CargarDatos(){
    cout<<"Numero de Articulo:"<<endl;
    cin>>a;
    cout<<"Numero de Sucursal:"<<endl;
    cin>>s;
    cout<<"Cantidad:"<<endl;
    cin>>c;

    mat[a][s]=c;
}

void VenderArticulos(){
    cout<<"Numero de Articulo:"<<endl;
    cin>>a;
    cout<<"Numero de Sucursal:"<<endl;
    cin>>s;
    cout<<"Cantidad vendida:"<<endl;
    cin>>c;

    if(c>mat[a][s]){
        cout<<"La cantidad vendida es superior a la existente"<<endl;
        cout<<"Mercaderia existente:"<<endl;
        for (int i=0;i<5;i++){
            cout<<"Fila:"<<i<<"    ";
            for (int j=0;j<3;j++){
                cout<<"|Columna:"<<j<<"= "<<mat[i][j]<<"|";
            }
            cout<<endl;
        }
        y=1;
    }else{
        mat[a][s]-=c;
    }
}

int main(){
    do{
        cout<<"Opciones:"<<endl;
        cout<<"1- Cargar datos:"<<endl;
        cout<<"2- Venta de articulos:"<<endl;
        cin>>op;

        switch(op){
        case 1:
        CargarDatos();
        break;
        case 2:
        VenderArticulos();
        break;
        default:
        cout<<"Elija una de las 2 opciones"<<endl;
        }
    }while(y!=1);
}
