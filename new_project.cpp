                                                                // Functions




// #include<iostream>
// using namespace std;

// int prime(int p){
//     if(p%2 != 0){
//         cout<<"no. is prime";
//     }
//     else
//         cout<<"no. is not prime";

//         return 0;
// }


//     int factriolN(int n) {
//     int fac = 1;
//     for(int i=1; i<=n; i++){
//         fac *= i;

//     }
//     return fac;

// }


// int decTObinary(int decNum) {
//     int ans = 0;
//     int power = 1;

//     while(decNum > 0 ) {
//         int rem = decNum%2;
//         decNum = decNum/2;
//         ans += (rem*power);
//         power *= 10;
//     }
//     return ans;
// }



// int main(){


// cout<<decTObinary(23);

// return 0;
 


// #include<iostream>
// using namespace std;
// int main(){


                                           

                                                    //prime number/sum of n natural number/factioral/character pattern




//   int n;
//     cout<<"Enter the a numbers : ";
//     cin>>n;
//     int sum = 0;
//     for(int i = 0;i<=n;i++){
//         if(i%3==0){
//             sum += i;
            
//         }
        
//     }
//     cout<<sum;

//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     int mul = 1;
//     for(int i = 1;i<=n;i++){
//         mul *= i;

//     }
//     cout<<mul;

//     int n;
//     cout<<"enter the number of star : ";
//     cin>>n;
//     char ch = 'A';
    

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<i+1; j++){
//             cout<<ch;
//         }
//         ch =ch +1;
//         cout<<endl;
    
// }




                                                        //butterfly pattern
                                                    

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
// }



                                                                //Arrays



// #include<iostream>
// #include <climits>
// #include<vector>
// using namespace std;

                                                //sum and multiplication of arrys elements


                                                             
// int sumANDmul(int arr[], int size){
//     int sum = 0;
//     int mul = 1;
//     for(int i =0; i<size; i++){
//         sum += arr[i];
//         mul *= arr[i];
//     }
//     cout<<sum<<endl;
//     cout<<mul<<endl;
    
//     return 0;

// }
                                                // swap the minumum and maximun number in arry


// int swapTHEmin(int arr[],int size){
//     int smallest = 0;
//     int largest = 0;
//     for(int i = 0 ; i<size; i++){
//         if(arr[i]<smallest){
//             smallest = i;
//         }
//         if(arr[i]>largest){
//             largest = i;
//         }
//         }
//         cout<<"minimum value is : "<<smallest<<endl;
//         cout<<"maximum value is  : "<<largest<<endl; 
//         swap(arr[smallest],arr[largest]);
//         return 0;
//     }

                                                       // to print all the unique values in an array

                                                       
// int unique(int arr[],int size){
//     for(int i = 0 ; i<size ; i++){
//         int count = 0;


//         for(int j = 0 ; j< size ; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }

//         }
        
//         if(count == 1)
//             cout<<arr[i]<<" ";
        
    

//     }
//     return 0;
// }

                                                    
                                                            //to print the intersection of 2 array

// void intersection(int arr1[] ,int n ,int arr2[],int m){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<m; j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
// }







// int main(){
    // int arr[] = {1,4,2,6,7};
    // int size= 5;
    // swapTHEmin(arr,size);
    // for(int i = 0; i <size; i++){
    //     cout<<arr[i];

    // }
    // cout<<" ";
    // int arr1[]= {2,1,5,3,5,1,6,7,8};
    // int arr2[]= {1,4,2,6,7,3,4,3,5};
    // int n = 9;
    // int m = 9;
    // intersection(arr1,n,arr2,m);
            
    // return 0;

    // vector<int> vec ={1,3,5,2,};
    // cout<<vec[0]<<endl;

    // return 0;
    
    // }




                                                         //vector


                                                         //linear search



#include<iostream>
#include<vector>
using namespace std;

// int linear_search(vector<int> vac){
//     int n;
//     cout<<"enter the search number : ";
//     cin>>n;
//     for(int x : vac){
//         if(n == x){
//             cout<<"element FOUND";
//             return 0;
//         }
            
//     }
//     cout<<"element not FOUND";

// }


                                                             // maximum subarray sum

// int maxsubarray(int arr[],int size){
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;

//     for(int str =0; str<n ;str++){
//         for(int end = str; end<n ; end++){
//             for(int i = str; i<=end ; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


                                                           // pair sum

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i<n; i++){
        for(int j = i+1 ; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}



int main(){
    // vector<int> vac = {1,3,5,2,6,8,9};
    // linear_search(vac);

    vector<int> nums = {1,3,5,2,6,8,9};
    int target = 17;
    vector<int> ans = pairsum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;

}



