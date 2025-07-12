#include<iostream>
#include <climits>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = {2,6,1,4,39};
    int target = 9;
    int positionOfTarget = INT_MAX;
    //tell the position of 4 if it exists
    for (int i = 0; i < 5; i++){
      if(arr[i] == target)
      {
        positionOfTarget = i;
      }  
    }
   // cout<<positionOfTarget;
    if(positionOfTarget == INT_MAX){
        cout<<"target not found";
    }
    else{
        cout<<positionOfTarget;
    }

}

//Time Complexity of Linear Search Algo is O(n);