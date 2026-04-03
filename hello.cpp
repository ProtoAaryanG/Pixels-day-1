#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number ";
    int num;
    cin>>num;
    int *p = &num;
    cout <<"Address"<< p<<endl;
    cout <<"value : "<< *p;

    return 0;
}

