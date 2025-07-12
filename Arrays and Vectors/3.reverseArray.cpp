#include<iostream>
using namespace std;
int main(){
    int arr[5]  = {2,3,4,5,6};
    int reversedArr[5];
 
    // //to reverse this array
    // for(int i = 0; i< 5; i++){
    //    reversedArr[i] = arr[4-i];
    // }
    // for(int i = 0; i<5; i++){
    //     cout<<reversedArr[i];
    // }
  
    // swap approach
    for(int i = 0; i< 5; i++){
      if(i<(4-i))  {swap(arr[i], arr[4-i]);}
      
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i];
    }
    
}