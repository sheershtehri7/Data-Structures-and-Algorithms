//sum of first n numbers

#include<iostream>
using namespace std;
int sum = 0;

int add(int n, int i){
    if(i>n){
        return sum;
    }
 sum = sum+i;
if(n == i){
cout<<sum;
}
 ++i;
 add(n,i);
  
}

int main(){
    int n;
   cout<<"enter any number"<<endl;
   cin>>n;
   add(n,1);

}