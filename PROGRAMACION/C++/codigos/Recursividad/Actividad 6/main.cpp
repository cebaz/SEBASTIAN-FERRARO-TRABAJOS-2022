#include <iostream>
using namespace std;

int a,b;

int vectorSuma(int vec[],int a,int b){
    if(a>0){
        b+=vec[a-1];
        vectorSuma(vec,a-1,b);
    }else{
        return b;
    }
}

int main(){
    cout<<"Espacios de vector:"<<endl;
    cin>>a;
    int vec[a];
    for(int c=0;c<a;c++){
        cout<<"Numero del espacio del vector: "<<c<<endl;
        cin>>vec[c];
    }
    return vectorSuma(vec, a, b);
}
