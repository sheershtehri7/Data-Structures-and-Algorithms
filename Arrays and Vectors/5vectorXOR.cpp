#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums  = {1,1,5,7,5,7,4};
    int unique = 0;
    for(int val : nums){
        unique = unique^val;
    }
    cout<<unique;


  
}