#include <iostream>
#include <vector>
using namespace std;

void printAllSubsets(string p, string up)
{
    if (up.length() == 0)
    {
        cout << p << endl;
        return;
    }
    printAllSubsets(p + up[0], up.substr(1));
    printAllSubsets(p, up.substr((1)));
}

// with the ascii code also
void printAllSubsetsAsciiAlso(string p, string up)
{
    if (up.length() == 0)
    {
        cout << p << endl;
        return;
    }
    printAllSubsetsAsciiAlso(p + up[0], up.substr(1));
    printAllSubsetsAsciiAlso(p, up.substr((1)));
    printAllSubsetsAsciiAlso(p + char(up[0] + '0'), up.substr(1));
}

void printAllSubsetsList(vector<string> &ss, string p, string up)
{
    if (up.length() == 0)
    {
        ss.push_back(p);
        ss.push_back(" ");
        return;
    }
    printAllSubsetsList(ss, p + up[0], up.substr(1));
    printAllSubsetsList(ss, up, up.substr((1)));
}

// vector<vector<int>> allSubsetsIte(vector<int> v) {
//     vector<vector<int>> outer;
//     outer.push_back(vector<int>{});

//     for(auto e : v) {

//         //creating the same number of vectors everytime as the current lenght of outer vector and then appending them
//         for(int i = 0 ; i < outer.size() ; i++) {
//             //add the inner vectors

//             vector<int> in = outer[i].push_back(e)
//             outer.push_back(in);
//         }
//     } return outer;
// }

// vector<vector<int>> allSubsetsIteRepallowed(vector<int> v) {
//     sort(v.begin() , v.end()); //we're sorting bec. our method will only work for adjacent duplicates so to make them adjacnts we're sorting them.
//     vector<vector<int>> outer;
//     outer.push_back(vector<int>{});
//     int start , end;
//     for(int i = 0 ; i < v.size() ; i++) {
//         int start = 0;
//         if(v[i] == v[i-1]) {
//             //duplicate found
//             start = end + 1;
//         }
//         end = outer.size() - 1;
//         //creating the same number of vectors everytime as the current lenght of outer vector and then appending them
//         for(int j = start ; j < outer.size() ; j++) {
//             //add the inner vectors

//             vector<int> in = outer[j].push_back(v[i])
//             outer.push_back(in);
//         }
//     } return outer;
// }

int main()
{
    vector<string> v = {};
    printAllSubsetsList(v, "", "abc");
    for (auto e : v)
        cout << e;
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