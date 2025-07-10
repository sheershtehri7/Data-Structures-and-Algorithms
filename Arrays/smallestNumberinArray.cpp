#include<iostream>
using namespace std;

int smallestNumberInArray(){
        int arr[6] = {5,15,107,1,-15,24};
    int k = 9999;
    for(int i = 0; i<= 5; i++){
        if(arr[i] < k){
          k =  arr[i];
        }
    }
    cout<<k;
}
int largestNumInArray(){
      int arr[6] = {5,15,107,1,-15,24};
    int k = -999;
    for(int i = 0; i<= 5; i++){
        if(arr[i] > k){
          k =  arr[i];
        }
    }
    cout<<k;
}
