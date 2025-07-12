//use backtracking to print N to 1 without using -1

#include<iostream>
using namespace std;

int Name(int n, int i){
  if(i>n){

    return 0;

  }
  
  Name(n, i+1);
  cout<<i<<endl;
}

int main(){
    int i , n;
    cin>>n>>i;
    Name(n,i);
}