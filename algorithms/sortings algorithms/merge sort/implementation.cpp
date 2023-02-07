#include <iostream>
#include <vector>
using namespace std;
vector<int> mergee(vector<int> l, vector<int> r)
{
    vector<int> ans;
    int i = 0; // l
    int j = 0; // r
    while (i < l.size() && j < r.size())
    {
        if (l[i] > r[j])
        {
            ans.push_back(r[j]);
            j++;
        }
        else
        {
            ans.push_back(l[i]);
            i++;
        }
    }
    while (i < l.size())
    {
        ans.push_back(l[i]);
        i++;
    }
    while (j < r.size())
    {
        ans.push_back(r[j]);
        j++;
    }
    return ans;
}
vector<int> mergeSort(vector<int> v)
{
    // base comdn.
    if (v.size() == 1)
        return v;
    int mid = v.size() / 2;
    vector<int> l;
    vector<int> r;
    copy(v.begin(), v.begin() + mid, back_inserter(l));
    copy(v.begin() + mid, v.end(), back_inserter(r));
    vector<int> ls = mergeSort(l);
    vector<int> rs = mergeSort(r);
    return mergee(ls, rs);
}

int main()
{
    vector<int> v{6, 4, 3, 6, 89, 9};
    for (auto e : mergeSort(v))
    {
        cout << e << " ";
    }
}
