#include<bits/stdc++.h>
using namespace std;

int main(){
    //         5
    //       5 4
    //     5 4 3
    //   5 4 3 2 
    // 5 4 3 2 1
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=5;j>=5-i+1;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

   //         E
   //       E D
   //     E D C
   //   E D C B
   // E D C B A
 for(int i=1;i<=5;i++)
 {
    for(int j=1;j<=5-i;j++){
        cout<<"  ";
    }

    char ch = 'E';

    for(int j=1;j<=i;j++)
    {
        cout<<ch<< " ";
        ch--;
    }
    cout<<endl;

   }


}