#include <iostream>
using namespace std;

int f,c,f2,c2,cuenta,y;
int m1[0][0], m2[0][0], m3[0][0];

void CreacionDeMatrices() {
    do {
        cout<<"¿cuantas filas va a tener la primera matris?"<<endl;
        cin>>f;
        cout<<"¿cuantas columnas va a tener la primera matris?"<<endl;
        cin>>c;

        cout<<"¿que cuenta desea realizar?"<<endl;
        cout<<"1-suma"<<endl;
        cout<<"2-resta"<<endl;
        cout<<"3-multiplicacion"<<endl;
        cin>>cuenta;

        cout<<"¿cuantas filas va a tener la segunda matris?"<<endl;
        cin>>f2;
        cout<<"¿cuantas columnas va a tener la segunda matris?"<<endl;
        cin>>c2;
        switch(cuenta) {
        case 1:
            if(f==f2 && c==c2) {
                y=1;
                m1[f][c];
                m2[f2][c2];
                m3[f][c];
            } else {
                cout<<"las matrices no tienen el mismo tamaño"<<endl;
            }
            break;
        case 2:
            if(f==f2 && c==c2) {
                y=1;
                m1[f][c];
                m2[f2][c2];
                m3[f][c];
            } else {
                cout<<"las matrices no tienen el mismo tamaño"<<endl;
            }
            break;
        case 3:
            if(c==f2) {
                y=1;
                m1[f][c];
                m2[f2][c2];
                m3[f][c2];
            } else {
                cout<<"las columnas de la primera matris no coincide con las filas de la segunda matris"<<endl;
            }
            break;
        default:
            cout<<"opcion no valida, porfabor elija una opcion"<<endl;
        }
    } while(y==0);
}

void RecoleccionDeDatos() {
    for (int i=0; i<f; i++) {
        for (int j=0; j<c; j++) {
            cout<<"valor de la primera matris, fila:"<<i<<" columna:"<<j<<endl;
            cin>>m1[i][j];
        }
    }

    for (int i=0; i<f2; i++) {
        for (int j=0; j<c2; j++) {
            cout<<"valor de la segunda matris, fila:"<<i<<" columna:"<<j<<endl;
            cin>>m2[i][j];
        }
    }
}

void CalcularMatris() {
    switch(cuenta) {
    case 1:
        for (int i=0; i<f; i++) {
            for (int j=0; j<c; j++) {
                m3[i][j]=m1[i][j]+m2[i][j];
            }
        }
        break;
    case 2:
        for (int i=0; i<f; i++) {
            for (int j=0; j<c; j++) {
                m3[i][j]=m1[i][j]-m2[i][j];
            }
        }
        break;
    case 3:
        for (int i=0; i<f; i++) {
            for (int j=0; j<c2; j++) {
                m3[i][j]+=m1[j][i]*m2[i][j];
            }
        }
        break;
    default:
        cout<<"algo ah salido mal"<<endl;
    }
}

void DibujarMatris(){
    if(cuenta==3){
        for (int i=0; i<f; i++){
            for (int j=0; j<c2; j++) {
                if(m3[f][c2]>1)
                cout<<"----";
            }
        }

            cout<<"-";
        for (int i=0; i<f; i++) {
            cout<<endl;
            cout<<"| ";
            for (int j=0; j<c2; j++) {
                cout<<m3[i][j]<<" | ";
            }
            cout<<endl;
            cout<<"-";
            for (int j=0; j<c2; j++) {
                cout<<"-----";
            }
        }
    }else{
        for (int j=0; j<c; j++) {
                cout<<"----";
            }
            cout<<"-";
        for (int i=0; i<f; i++) {
            cout<<endl;
            cout<<"| ";
            for (int j=0; j<c; j++) {
                cout<<m3[i][j]<<" | ";
            }
            cout<<endl;
            cout<<"-";
            for (int j=0; j<c; j++) {
                cout<<"----";
            }
        }
    }
}

int main()
{
    CreacionDeMatrices();
    RecoleccionDeDatos();
    CalcularMatris();
    switch(cuenta) {
    case 1:
        DibujarMatris();
        break;
    case 2:
        DibujarMatris();
        break;
    case 3:
        DibujarMatris();
        break;
    default:
        ;
    }
}
do{
    if
}while()
