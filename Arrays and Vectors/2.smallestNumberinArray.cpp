#include<iostream>
#include <climits>
using namespace std;
   int arr[6] = {5,15,107,1,-15,24};
int smallestNumberInArray(){
     
    int k = INT_MAX;
    for(int i = 0; i<= 5; i++){
        if(arr[i] < k){
          k =  arr[i];
        }
    }
    cout<<k;
    return k;
}
int largestNumInArray(){
    
    int k = INT_MIN;
    for(int i = 0; i<= 5; i++){
        if(arr[i] > k){
          k =  arr[i];
        }
    }
    cout<<k;
    return k;
}
int usingminMethod(){
  int k = INT_MAX;
  for(int i = 0; i<= 6; i++){
  k =   min(arr[i],k);
  }
  cout<<k;
  return k;
}
int main(){
  smallestNumberInArray();
  cout<<endl;
  largestNumInArray();
   cout<<endl;
  usingminMethod();

}
//Array is implicitly pass by Reference and not pass by value!
//