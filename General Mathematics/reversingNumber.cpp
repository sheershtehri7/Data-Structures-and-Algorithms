#include<iostream>
using namespace std;

int main(){
    int n = 7862;
    int ld;
    int revNumber = 0;
    while (n>0)
    {
        ld = n%10;
        revNumber = (revNumber*10) + ld;
        n = n/10;
    }
    cout<<revNumber;
    

}