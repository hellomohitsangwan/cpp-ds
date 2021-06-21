#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float v1 , p1 , t1 , v2 , t2; cin>>v1>>p1>>t1>>v2>>t2;
    try
    {
        string errorMessage = "zero not allowed";
        if(v1 == 0 || t1 == 0) {
            throw(errorMessage);
        }
    float finalPressure = p1*v1*t2/(v2*t1);
    cout <<fixed<<setprecision(2) << finalPressure << '\n';
    }
    catch(string exception)
    {
        cout<<exception << '\n';
    }

    
}