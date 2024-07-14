#include <iostream>
using namespace std;

string palabra;
string capicua;
int n;
int a=0;

string palindroma (string palabra,string capicua,int n,int a){
    if (a==n){
        if(palabra==capicua){
            cout<<"la palabra '"<<palabra<<"' es palindroma"<<endl;
        }else{
            cout<<"la palabra '"<<palabra<<"' no es palindroma"<<endl;
        }
    }else{
        capicua[a]=palabra[n-a-1];
        return palindroma(palabra,capicua,n,a+1);
    }
}

int main()
{
    cin>>palabra;
    n=palabra.size();
    capicua=palabra;
    palindroma(palabra,capicua,n,a);
}
