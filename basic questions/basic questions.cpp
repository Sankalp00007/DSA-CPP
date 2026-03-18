#include<bits/stdc++.h>
using namespace std;

int main(){

    // printing a-z characters
    // char n;
    // for(char n='a';n<='z';n++){
    //     cout<< n<<endl;
    // }
    
    // printing the numbers in reverse fashion
    // int n;
    // cout<<"enter the number:";
    // cin>> n;
    // for(int i=n; i>=1; i--){
    //     cout<<i<<endl;
    // }

    // printing the nmbers from 1-100 but difference is 3
    // for(int i=1; i<=100 ; i=i+3){
    //     cout<<i<<endl;
    // }

    // making multiplication table of any number
    // int n;
    // cout<<"enter number to get its table: ";
    // cin>> n;

    // for(int i=1; i<=10; i++){
    //     cout<< n*i<<endl;
    // }

    // to calcute any number on power
    int n , pow, num ;
    cout<< " enter the number: ";
    cin>> n;
    cout<< "enter the power: ";
    cin>>pow;
    
    num = n;
    for(int i=1; i<pow;i++){
        num = num * n;
    }
    cout<< num;
    
}