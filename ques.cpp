//                                                    ques no 1


// #include<iostream>
// using namespace std;


// int sum(){
//     int a ;
//     cout<<"Enter the number :"<<endl;
//     cin>>a;
//     int b;
//     cout<<"Enter the sec number :"<<endl;
//     cin>>b;
//     int add = a + b;
//     cout<<add<<endl;


//     return add;
// }

// int main(){
//     sum();


//     return 0;
// }



//                                                         ques no2

// #include<iostream>
// #include<string>
// using namespace std;


// int main(){
    // int n,m;
//     cin>>n;
//     cin>>m;
//     for (int j = 0; j <= n; j++)
//     {
//         for ( int i = 0; i <= m; i++)
//         {
//         cout<<"*";
//         }
//         cout<<endl;

//     }

//                                               ques no 3
    // int m;
    // cin>>m;
    
    // for(int i = 1; i<=m; i++){
    //     for(int j = 1; j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//                                                   ques no4

    // int n;
    // cin>>n;
    // for( int i = 1; i<=n ;i++){
    //     for(int j = n; j>=i; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
        
                                                 // ques no5
    


    // int bull[8];
    // for(int i= 0;i<8;i++){
    //     cin>>bull[i];

    // }
    // int sum = 0;
    // for(int i= 0;i<8;i++){
    //     sum +=bull[i];

    // }
    // cout<<sum;

//     return 0;

// }




                                                           

                                                         //vector
                                                          //question6




#include<iostream>
#include<vector>
using namespace std;


int main(){
    // vector<int> v;
    // for(int j = 0;j<5;j++){

    

    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }


    // for(int i =0;i<v.size();i++){
    //     cout<<v[i];

    // }
    // cout<<endl;

                                                    //    question7


    // vector<int> v(6);
    
    // for(int i= 0;i<=6;i++){
    //     cin>>v[i];
    // }
    // cout<<"enter the occurance";
    // int x;
    // cin>>x;
    // int occurance = -1;

    // for(int i =0 ;i<=v.size();i++){
    //     if(v[i] == x){
    //         occurance = i;
            
    //     }
    // }
    // cout<<occurance<<endl;



                                                                     // question8
    

    // vector<int> v(6);
    // int last_occurance = 0;
    
    // for(int i =1;i<=6;i++){
    //     cin>>v[i];
    // }

    // cout<<"Enter x:";
    // int x;
    // cin>>x;
    // for(int i =1;i<=6;i++){
    //     if(v[i] == x){
    //         last_occurance++;
    //     }

    // }
    // cout<<last_occurance<<endl;
                                                                //  question no 9


// vector<int> v(6);

// for(int i =1;i<=6;i++){
//     cin>>v[i];
// }

// cout<<"enter x:";
// int x;
// cin>>x;
// int ele =0;
// for(int i=1;i<7;i++){
//     if(v[i]>x){
//         ele++;


//     }
// }
// cout<<ele<<endl;


                                                                // question no10



// vector<int> v(6);

// for(int i =1;i<=6;i++){
//     cin>>v[i];
// }

// bool k = true;
// for(int i =1;i<7;i++){
//     if(v[i]>v[i]-1){
//         k=false;
//     }
// }
// cout<<k<<endl;



                                                              // question no 11                     worng code



// int array[] = {3,4,5,6,2,1,7};

// int x;
// cout<<"enter the value of x";
// cin>>x;
// int size = 8;
// int occurance = 0;

// for(int i = 0; i<size;i++){
//     for(int j = 0;j<size +1;j++){
//         if(array[i]+array[j]==x){                                      
//             occurance++;
            
//         }
//     }

    
// }
// cout<<occurance<<endl;



























    return 0;

}