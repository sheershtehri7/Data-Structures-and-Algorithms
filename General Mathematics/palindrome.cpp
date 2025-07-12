#include<iostream>
using namespace std;

int main(){
    int x = 7887;
    int n = 7887;
    int ld;
    int revNumber = 0;
    while (n>0)
    {
        ld = n%10;
        revNumber = (revNumber*10) + ld;
        n = n/10;
    }
    cout<<revNumber;
    if(revNumber == x){
        cout<<" WOWWW it's a Palindrome";
    }
    
   

}