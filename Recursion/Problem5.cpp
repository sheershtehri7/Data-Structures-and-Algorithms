//functional way of problem 4

#include<iostream>
using namespace std;
int sum = 0;

int add(int n){
  if(n == 0){
    cout<<sum;
    return 0;
  }
  return n + add(n-1);
}

int main(){
    int n;
   cout<<"enter any number"<<endl;
   cin>>n;
  cout<< add(n);

}