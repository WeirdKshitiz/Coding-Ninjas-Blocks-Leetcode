#include <iostream>
using namespace std;
void replace(char str[],char c1,char c2){
if(str[0]=='\0'){
    return ;
}
if(str[0]==c1){
    str[0]=c2;
}
return replace(str+1,c1,c2);
}

int main(){
char str[100];
cin>>str;
char c1='x';
char c2='l';
replace(str,c1,c2);
cout<<str;
return 0;
}