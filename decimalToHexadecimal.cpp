#include <iostream>
using namespace std;
string decimalToHexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n){
        x*=16;
    }
        x/=16;
    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=16;
        if(lastDigit<=9)
        ans=ans+to_string(lastDigit);
        //to string is a function that converts our integer
        //into a string
        else{
            char c='A'+lastDigit-10;

            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
int n;
cin>>n;
cout<<decimalToHexadecimal(n);
return 0;
}