#include <iostream>
using namespace std;

int a,b;

int mcd(int a,int b){
    if(a>b){
        return mcd(a-b,b);
    }else{
        if(b>a){
            return mcd(a,b-a);
        }else{
            return a;
        }
    }
}

int main(){
    cout<<"ingrese el primer numero"<<endl;
    cin>>a;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>b;
    return mcd(a,b);
}
