#include<iostream>
using namespace std;

int prime(int p){
    if(p%2 != 0){
        cout<<"no. is prime";
    }
    else
        cout<<"no. is not prime";

        return 0;
}


    int factriolN(int n) {
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;

    }
    return fac;

}




int decTObinary(int decNum) {
    int ans = 0;
    int power = 1;

    while(decNum > 0 ) {
        int rem = decNum%2;
        decNum = decNum/2;
        ans += (rem*power);
        power *= 10;
    }
    return ans;
}




  
int main(){

  // int n;
    // cout<<"Enter the a numbers : ";
    // cin>>n;
    // int sum = 0;
    // for(int i = 0;i<=n;i++){
    //     if(i%3==0){
    //         sum += i;
            
    //     }
        
    // }
    // cout<<sum;

    // int n;
    // cout<<"enter the number : ";
    // cin>>n;
    // int mul = 1;
    // for(int i = 1;i<=n;i++){
    //     mul *= i;

    // }
    // cout<<mul;

    // int n;
    // cout<<"enter the number of star : ";
    // cin>>n;
    // char ch = 'A';
    

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<i+1; j++){
    //         cout<<ch;
    //     }
    //     ch =ch +1;
    //     cout<<endl;
    
// }

// int n;
// cout<<"enter the no. : ";
// cin>>n;

// for(int i =1; i<=n; i++){
//     for(int j =1; j<=i; j++){
//         cout<<"*";

//     }
//     for(int j = 1; j<=2*(n-i); j++){
//         cout<<" ";

//     }
//     for(int j =1; j<=i; j++){
//         cout<<"*";
        
//     }
//     cout<<endl;
// }


// for(int i =n; i>=1; i--){
//     for(int j =1; j<=i; j++){
//         cout<<"*";

//     }
//     for(int j = 1; j<=2*(n-i); j++){
//         cout<<" ";

//     }
//     for(int j =1; j<=i; j++){
//         cout<<"*";
        
//     }
//     cout<<endl;
// }

cout<<decTObinary(23);


















    

    
    
    










return 0;

}