#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
         for(int j=1; j<=i; j++){
            cout<<"* ";
        }cout<<endl;
        
        
    }
    for(int i=n; i>=1; i--){
        for(int k=1; k<=i; k++){
            cout<<"* ";

        }
        int space =2*n - 2*i;
        for(int k=1; k<=space ; k++){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";

        }cout<<endl;
    }

    
}