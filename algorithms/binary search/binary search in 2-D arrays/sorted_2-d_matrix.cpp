#include <iostream>
#include <vector>
using namespace std;

vector<int> binarySearch(vector<vector<int>> v, int row, int colStart, int colEnd, int t)
{
    while (colStart <= colEnd)
    {
        int mid = (colEnd + colStart) / 2;
        if (v[row][mid] == t)
        {
            return vector<int>{row, mid};
        }
        if (v[row][mid] < t)
        {
            colStart = mid + 1;
        }
        else
        {
            colEnd = mid - 1;
        }
    } return vector<int>{-1,-1};
}
vector<int> binarySeach_2d_sorted(vector<vector<int>> v, int t)
{
    int rs = 0, re = v.size() - 1;
    int colMid = (v[0].size()) / 2;
    while(rs < (re - 1))
    { //this is the condition when only 2 rows will will left
        int midRow = (rs+re)/2;
        if (v[midRow][colMid] == t)
        {
            return vector<int>{midRow, colMid};
        }
        //what if target is greater
        //then we'll move the row to the mid
        if (v[midRow][colMid] < t)
        {
            rs = midRow;
        }
        else
        {
            re = midRow;
        }
    }
    //now we have to rows left so we have to search for the element in them
    // first we'll  checkif the element is present in the mic col
    if (v[rs][colMid] == t)
    {
        return vector<int>{rs, colMid};
    }
    if (v[rs + 1][colMid] == t)
    {
        return vector<int>{rs + 1, colMid};
    }

    //now we have 4 arays left so we'll check in all of them
    if (v[rs][colMid - 1] >= t)
    { //then element is present in top left array
        return binarySearch(v, rs, 0, colMid - 1, t);
    }
    else if (v[rs + 1][colMid - 1] >= t)
    {
        return binarySearch(v, rs + 1, 0, colMid - 1, t);
    }
        else if (v[rs][colMid + 1] <= t && v[rs][v.size()-1] >= t)
    {
        return binarySearch(v, rs, colMid + 1 , v[0].size()-1, t);
    }
        else
    {
        return binarySearch(v, rs + 1, colMid + 1 , v[0].size()-1, t);
    } return vector<int>{-1,-1};
}

int main()
{
    vector<vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int t = 10;
    for(auto e : binarySeach_2d_sorted(v , t)) {
        cout<<e<<" ";
    }
    // for (int i = 0; i < binarySeach_2d_sorted(v , t).size(); i++)
    // {
    //     /* code */
    //     cout<<binarySeach_2d_sorted(v , t)[i];
    // }
    
    // cout<<binarySeach_2d_sorted(v , t);
}