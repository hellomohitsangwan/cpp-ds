#include <iostream>
#include <vector>
using namespace std;
bool helper(vector<int> v, int i)
{
    if (i == v.size() - 1)
        return true; //means we have reached to the corner case till now array is sorted
    if (v[i] > v[i + 1]) //means it's not Sorted
        return false;
    return helper(v, ++i);
}
bool isSorted(vector<int> v)
{
    return helper(v, 0);
}
int main()
{
    vector<int> v{1, 1, 2, 4};
    cout << isSorted(v);
}