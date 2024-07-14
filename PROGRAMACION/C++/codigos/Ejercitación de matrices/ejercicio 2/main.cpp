#include <iostream>
using namespace std;
int n,o,m,saldo,mayo;
int may[100];
int mat [100][4]{0};

void IngresarDatos (){
    do {
            cout<<"Numero de cliente: "<<endl;
            cin>>n;
            if(n!=0){
            cout<<"Tipo de transaccion: "<<endl;
            cout<<"1-Depositar"<<endl;
            cout<<"2-Extraer"<<endl;
            cout<<"3-Comision"<<endl;
            cout<<"4-Intereses"<<endl;
            cin>>o;

                switch(o){
                case 1:
                    cout<<"Monto de transaccion"<<endl;
                        cin>>m;
                    mat[n][o-1]+=m;
                    break;
                case 2:
                    cout<<"Monto de transaccion"<<endl;
                        cin>>m;
                    mat[n][o-1]+=m;
                    break;
                case 3:
                    cout<<"Monto de transaccion"<<endl;
                        cin>>m;
                    mat[n][o-1]+=m;
                    break;
                case 4:
                    cout<<"Monto de transaccion"<<endl;
                        cin>>m;
                    mat[n][o-1]+=m;
                    break;
                default:
                    cout<<"Opcion NO valida"<<endl;
            }
        }
    }while(n!=0);
}

void MostrarDatos(){
    cout<<"Saldos:"<<endl;
    for (int c=0; c<100; c++){
        saldo=0;
        saldo+=mat[c][0];
        saldo-=mat[c][1];
        saldo+=mat[c][2];
        saldo-=mat[c][3];
        if(saldo!=0){
            cout<<"Cliente N-"<<c<<"= "<<saldo<<endl;
        }
    }
}

void MayorDeposito(){
    mayo=mat[0][0];
    for (int i=0;i<100;i++){
            if(mayo<mat[i][0]){
                mayo=mat[i][0];
        }
    }

    for (int i=0;i<100;i++){
        if(mat[i][0]==mayo){
            cout<<"Mayor/es depocitos:"<<endl;
            cout<<"Cliente N-"<<i<<" depocito: "<<mat[i][0]<<endl;
        }
    }
}

int main(){
IngresarDatos();
MostrarDatos();
MayorDeposito();
}
