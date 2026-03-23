#include<bits/stdc++.h>
using namespace std;

int main(){
    //print
    //F G H I J K
    //F G H I J K
    //F G H I J K (5times)

    // basic approach
    //  for(int i=1;i<=5;i++){
    //     for(char j='F';j<='K';j++){
    //         cout<< j<<" ";
    //     }
    //     cout<<endl;
    //  }
    
    // method 2
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6;j++){
            char name= 'F'+(j-1);
            cout<< name<<" ";
        }
        cout<<endl;
     }
}