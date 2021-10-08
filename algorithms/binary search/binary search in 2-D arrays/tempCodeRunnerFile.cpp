    while (rs < (re - 1))
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
            rs = colMid;
        }
        else
        {
            re = colMid;
        }
    }