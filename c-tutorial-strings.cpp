#include <iostream>
#include <string>

using namespace std;

int main() {
	string a,b;
    cin>>a;cin>>b;
    cout<<a.length()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;

    char c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b<<endl;  
    return 0;
}