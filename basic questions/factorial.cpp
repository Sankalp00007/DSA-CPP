#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , fact;

    cout<<"enter the number: ";
    cin>>n;
    
    fact = 1 ;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout<< fact;
}