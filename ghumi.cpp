#include <iostream>
using namespace std;
int main(){

for(int date=1;date<=30;date++){
    if(date%2==0){
        continue;
    }
    cout<<date<<"go out today!"<<endl;
}

return 0;
}