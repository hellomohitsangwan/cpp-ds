
// Each subject has their own terms and each term has a weightage representing its  importance. Terms and their weightage are given in two files namely biology.txt and chemistry.txt.  A passage will   have mixed terms from both the subjects. Given a passage in an input file, determine whether it is more related to biology or chemistry. All letters in input file are in lower case. A passage is said to be more related to chemistry when the sum of weightage of chemistry terms in it is more than the sum of weightage of biology terms in it. If the passage is more related to biology then print the given passage with biology terms in upper case and if the passage is more related to chemistry then print the given passage with chemistry terms in upper case.

// For example biology.txt  contains the  information  as follows:

// plants 3

// tissue 4

// macronutrients 5

// micronutrients 6

// living 7

// organism 8

// animals 9

// taxon 10

// Chemistry.txt contains the  information as:

// element 2

// carbon 3

// hydrogen 4

// magnesium 5

// iron 7

// manganese 8

// copper 9

// nickel 10

// sodium 11

// If the input file contains the following passage “the element which are present in large amounts in plants tissue are called macronutrients they are in excess of 10 mmole per kg of dry matter carbon hydrogen and magnesium are the macronutrients END” then the expected output is

// Biology term count - 17

// Chemistry term count – 14

// And passage with biology terms in upper case:

// the element which are present in large amounts in PLANTS TISSUE are called MACRONUTRIENTS they are in excess of 10 mmole per kg of dry matter carbon hydrogen and magnesium are the MACRONUTRIENTS

// Input Format

// Name of the file with input passage

// Output Format

// Total weightage of biology terms

// Total weightage of chemistry terms

// Print original text with biology terms in upper case if biology count is greater than chemistry count and print chemistry terms in upper case otherwise

// NOTE: Assume that the text is sourced from chemistry or bio books separately, and there arises no condition of an equal num of chemistry and biology terms.


#include<iostream>
#include<fstream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    map<string , int> bio;
    map<string , int> chem;
    ifstream in1 , in2;
    in1.open("biology.txt");
    while(in1.eof() == 0) {
        string s;
        int a;
        in1>>s>>a;
        bio[s] = a;
    }
    in2.open("chemistry.txt");
    while(in2.eof() == 0) {
        string s;
        int a;
        in2>>s>>a;
        chem[s] = a;
    }
    // for(auto e : chem) {
    //     cout<<e.first<<" "<<e.second;
    // }
    string file;
    cin>>file;
    ifstream in3;
    in3.open(file);
    vector<string> v;
    while(in3.eof() == 0) {
        string s;
        in3>>s;
        v.push_back(s);
    }
    
    int chCount = 0;
    int bioCount = 0;
    vector<string> fv;
    vector<string> c;
    vector<string> b;
    for(int i = 0 ; i < v.size() ; i++) {
        auto itc = chem.find(v[i]);
        if(itc == chem.end()) {
            chCount += 0;
        } else {
            chCount += itc->second;
            // c.push_back(itc->second);
        }
        auto itb = bio.find(v[i]);
        if(itb == bio.end()) {
            bioCount += 0;
            // b.push_back(itb->second);
        } else{
            bioCount += itb->second;
        }
        
    }
    
    cout<<bioCount<<endl<<chCount<<endl;
    // int st = ;
    for(int i = 0 ; i < v.size() ; i++) {
        if(chCount > bioCount) {
            if(chem.find(v[i]) == chem.end() &&bio.find(v[i]) == bio.end()) {
                fv.push_back(v[i]);
            }
            else if(chem.find(v[i]) == chem.end()) {
                fv.push_back(v[i]); 
            } 
            else {
                // fv.push_back(v[i]);  //make it upper case
                    transform(v[i].begin(), v[i].end(), v[i].begin(), ::toupper);
                    // cout << su << endl;
                    fv.push_back(v[i]);
            }
        } else{
            if(chem.find(v[i]) == chem.end() && bio.find(v[i]) == bio.end()) {
                fv.push_back(v[i]);
            } else if(bio.find(v[i]) == bio.end()) {
                fv.push_back(v[i]);
            } else{
                transform(v[i].begin() , v[i].end() , v[i].begin() , ::toupper);
                fv.push_back(v[i]);
            }
        }
    }
    int l = 0;
    for(int i = 0 ; i < fv.size() - 1 ; i++) {
        cout<<fv[i]<<" ";
    }
    // cout<<endl<<fv[fv.size() - 1];
    
}

