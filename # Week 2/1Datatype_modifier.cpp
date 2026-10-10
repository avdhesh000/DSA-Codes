#include<iostream>
using namespace std;
int main() {
    // using sizeof function to know the size of Different Datatypes and datatype modifiers
    cout<<"int : ";
    cout<<sizeof(int)<<" bytes"<<endl;
    cout<<"short int : ";
    cout<<sizeof(short int)<<" bytes"<<endl;    
    cout<<"long int : ";
    cout<<sizeof(long int)<<" bytes"<<endl;
    cout<<"long long int : ";
    cout<<sizeof(long long int)<<" bytes"<<endl;

    cout<<"float : ";
    cout<<sizeof(float)<<" bytes"<<endl;
    
    cout<<"double : ";
    cout<<sizeof(double)<<" bytes"<<endl;
    cout<<"long double : ";
    cout<<sizeof(long double)<<" bytes"<<endl;
    

    cout<<"unsigned short int : ";
    cout<<sizeof(unsigned short int)<<" bytes";
    return 0;
}