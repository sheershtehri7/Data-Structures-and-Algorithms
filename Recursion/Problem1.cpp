//Print Name 5 times using recursion

#include<iostream>
using namespace std;



int Name(int i, int n){
  if(i>n){

    return 0;

  }
  cout<<i<<endl;
  Name(i+1, n);
}

int main(){
    int i , n;
    cin>>i>>n;
    Name(i,n);
}