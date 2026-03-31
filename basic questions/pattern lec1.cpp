#include<bits/stdc++.h>
using namespace std;

int main(){
    // * printing 
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<< endl;
    // }

    // printing 1 in 1st row , 2 in 2nd row ... and so on upto n
    // 1 1 1 1 1
    // 2 2 2 2 2 
    // 3 3 3 3 3 upto 5
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<< i <<" ";
    //     }
    //     cout<< endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5 upto 5
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<< j <<" ";
    //     }
    //     cout<< endl;
    // }
    
    //5 4 3 2 1
    //5 4 3 2 1
    //upto 5 times
    // for(int i =1;i<=5 ; i++){
    //     for(int j=5; j>=1; j--){
    //         cout<< j <<" ";
    //     }
    //     cout<< endl;
    // }

    // printing squares
    // 1 4 9 16 25
    // upto 5 times
    // for (int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<< j*j<<" ";
    //     }
    //     cout<<endl;
    // }

    // a a a a a 
    // b b b b b
    //print 5 times
    // for(int i=1;i<=5;i++){
    //     char name = 'a' + (i-1) ;
    //     for(int j=1;j<=5;j++){
    //         cout<< name << " ";      
    //     }
    //     cout<< endl;
    // }

    // a b c d e
    // a b c d e
    // print upto 5 times
    // for(int i=1; i<=5;i++){
    //     for(int j=1; j<=5;j++){
    //         char name = 'a'+(j-1);
    //         cout<<name << " ";
    //     }
    //     cout<< endl;
    // }
    // same question basic apporach
    // for(int i=1; i<=5;i++){
    //     for(char j='a'; j<='e';j++){
    //         cout<< j << " ";
    //     }
    //     cout<< endl;
    // }

    // with ascii values a b c d e upto 5 times
    // for(int i=1; i<=5;i++){
    //     char name = 'a';
    //     for(int j=1; j<=5;j++){
           
    //         cout<<name+(j-1) << " ";
    //     }
    //     cout<< endl;
    // }
    int count=1;

    for(int i=1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<count<<" ";
            count= count+1;
        }
        cout<< endl;
    }



}