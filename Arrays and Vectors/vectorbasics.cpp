#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
   vec.push_back(2);
   vec.push_back(25);
   vec.push_back(35);
   vec.push_back(256);
   vec.push_back(256);
 cout<<  vec.size()<<endl;
   cout<< vec.capacity();
    return 0;
}