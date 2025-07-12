#include<iostream>
using namespace std;

int main(){
    int size = 16;
    int arr[size]  = {2,1,1,2, 3,3, 6, 6, 8, 9, 10, 10, 9 , 8,-8 };
    for(int i = 0; i<16 ; i++){
        for(int j = i+1; j< 16; j++){
         if(arr[i]>0){ if(arr[i]  == arr[j])
          {
            arr[j] = -arr[j];
          };}
        }
    }
    int sum = 0;
    for(int i = 0; i<16; i++){
        sum = arr[i] + sum;
    }
    cout<<sum;
}