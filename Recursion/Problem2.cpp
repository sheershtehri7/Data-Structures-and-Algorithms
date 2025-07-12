

#include<iostream>
using namespace std;



int Name(int n, int i){
  if(i>n){

    return 0;

  }
  cout<<n<<endl;
  Name(n-1, i);
}

int main(){
    int i , n;
    cin>>n>>i;
    Name(n,i);
}