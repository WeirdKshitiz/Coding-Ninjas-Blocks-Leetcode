#include <iostream>
using namespace std;
bool isPalindrome(string str,int low,int high){
    if(low>=high){
        return true;
    }
    if(str[low]!=str[high]){
        return false;
    }
    return isPalindrome(str,low+1,high-1);
}
int main(){
string str="XYBYBYX";
int len=str.length();
if(isPalindrome(str,0,len-1)){
    cout<<"Palindrome";
}
else{
    cout<<"Not Palindrome";
}

return 0;
}