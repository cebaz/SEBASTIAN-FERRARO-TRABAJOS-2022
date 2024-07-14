#include <iostream>
using namespace std;

int a[10],b[10],c[10];

void cargarLosVecatoresABC(){
    for(int c=0;c<3;c++){
        cout<<"ingrese un numero para el vector 'A'"<<endl;
        cin>>a[c];
}
    for(int c=0;c<3;c++){
        cout<<"ingrese un numero para el vector 'B'"<<endl;
        cin>>b[c];
}

    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            c[i]=b[i];
        }
        else{
            c[i]=a[i];
}
}
}

void mostrarVecatores(){
    for(int i=0;i<3;i++){
        cout<<"vercot 'A' en pocicio "<<i+1<<"="<<endl;
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"vercot 'B' en pocicio "<<i+1<<"="<<endl;
        cout<<b[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"vercot 'C' en pocicio "<<i+1<<"="<<endl;
        cout<<c[i]<<endl;
    }
}

int main()
{
    cargarLosVecatoresABC();
    mostrarVecatores();
}
