#include <iostream>

using namespace std;

int Matriz [3][12];
int aux [3], aux2 [12];
int a, b, c, aux3;

void RecorrerCrear(){
    for (int i=0;i<3;i++){
        for (int j=0;j<12;j++){
            cout<<"Ingrese el numero de fila"<<endl;
            cin>>a;
            cout<<"Ingrese el numero de coche"<<endl;
            cin>>b;
            cout<<"Ingrese la cantidad recaudada"<<endl;
            cin>>c;
            Matriz [a][b]=c;
        }
    }
}

void LineaColectivo (){
    for (int i=0;i<3;i++){
         for (int j=0;j<12;j++){
            aux [i]+=Matriz [i][j];
        }
    }
}

void Coches (){
    for (int j=0;j<12;j++){
        for (int i=0;i<3;i++){
            aux2 [j]+=Matriz [i][j];
        }
    }
}

void TotalGeneral(){
    for (int i=0;i<3;i++){
         for (int j=0;j<12;j++){
                aux3+=Matriz [i][j];
        }
    }
}

void MostrarDatos (){
    cout<<"El total por fila es de: "<<endl;
    for(c=0;c<3;c++){
    cout<<"Fila: "<<c<<"= "<<aux[c]<<endl;
    }
    cout<<"El total por columna es de: "<<endl;
    for(c=0;c<12;c++){
        cout<<"Columna: "<<c<<"= "<<aux2[c]<<endl;
    }
    cout<<"El total general es de: "<<aux3<<endl;
}

int main()
{
RecorrerCrear();
LineaColectivo();
Coches();
TotalGeneral();
MostrarDatos();
}
