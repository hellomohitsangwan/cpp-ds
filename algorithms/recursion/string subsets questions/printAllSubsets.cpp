#include<iostream>
#include<vector>
using namespace std;

void printAllSubsets(string p , string up) {
    if(up.length() == 0) {
        cout<<p<<endl;
        return;
    }
    printAllSubsets(p + up[0] , up.substr(1));
    printAllSubsets(p , up.substr((1)));
}

//with the ascii code also
void printAllSubsetsAsciiAlso(string p , string up) {
    if(up.length() == 0) {
        cout<<p<<endl;
        return;
    }
    printAllSubsetsAsciiAlso(p + up[0] , up.substr(1));
    printAllSubsetsAsciiAlso(p , up.substr((1)));
    printAllSubsetsAsciiAlso(p + char(up[0] + '0') , up.substr(1));
}
int main() {
  printAllSubsetsAsciiAlso("" , "abc");
}




/*
Count the number of perfect squares upto N
Time Complexity: O(Sqrt(N))

#include<iostream>
using namespace std;

int countSquares(int n) {
    int j=1;
    for(int i=1; i<n;  j++){
        i=(j+1)*(j+1);
    }
    return j-1;
}

int main() {
    int n = 12;
    cout<<"Squares till "<<n<<": "<<countSquares(n);
    return 0;
}
*/