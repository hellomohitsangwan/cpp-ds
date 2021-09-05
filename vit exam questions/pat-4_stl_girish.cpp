
// Our computers started storing the ones as capital letter Is and  zeroes as capital letter Os! For example, the character A, which is 65 in ASCII, would normally be stored as the byte 01000001, but our computers are storing it as OIOOOOOI.

 

// Given a string of 8-character "bytes" consisting of Is and Os, translate it using ASCII. Every "byte" is guaranteed to translate to a printable character (a decimal value between 32 and 126, inclusive). Note that one of these characters (the one with decimal value 32) is a space. No translated message will begin or end with a space, but there may be internal space characters.

// Use Try/catch block where ever required.

 

// Sample Input

// OIOOIIIIOIOOIOII

// Output

// OK


#include<iostream>
#include <string>
using namespace std;

int btd(int n) {
    int num = n;
    int dec_value = 0;
 
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
int main() {
    string s;
    cin>>s;
    string nosfh = "";  //number String
    string nossh = "";  //number String
    for (int i = 0; i <s.length(); i++)
    {
        if(i < s.length() / 2) {
        if(s[i] == 'O') {
            nosfh.push_back('0');
        } else {
            nosfh.push_back('1');
        }
        } else {
        if(s[i] == 'O') {
            nossh.push_back('0');
        } else {
            nossh.push_back('1');
        }
        }
    }
    try
    {
    int bvf = btd(stoi(nosfh));
    int bvs = btd(stoi(nossh));
    cout<<char(bvf)<<char(bvs);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
