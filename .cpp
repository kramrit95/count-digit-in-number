#include <iostream>
using namespace std;

int main() {

int t;

cin>>t;


while(t--){
int n;
cin>>n;
int c=0;


while(n!=0)
{

    if(n%10==4)
    {

    c=c+1;  
    }
    
       n= n/10;
       
    
    
}
cout<<c<<endl;

}
    return 0;
}
