#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int x,t,i=0;
    cin>>t;
    while(i++ < t){
        cin>>x;
        cout<<lround(sqrt(x))<<endl;
    }
    return 0;
}