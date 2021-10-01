/*
    ->It is used to calculate the range queries in mutable arrays.
    ->It requires O(N) memory.
    ->It can perform update operation in log(n) time.
    ->It can answer a query in log(n) time.
*/

#include <iostream>
#include <vector>

//Below is the implementation of 1-BasedIndexingFenwickTree for Range Query(SUM) and Point Update
class FenwickTree
{
private:
    const int mSize;
    std::vector<int> mBit;
    std::vector<int> mA;

    //It will add delta to all the ranges which include idx
    void add(int idx, int delta)
    {
        //Incrementing the idx first as we are implementing 1-BasedIndexing Fenwick Tree
        for (++idx; idx < mSize; idx += idx & -idx){
            mBit[idx] += delta;
        }
    }

    //It will return Sum in range [0, idx]
    int sum(int idx)
    {
        int result = 0;
        //Incrementing the idx first as we are implementing 1-BasedIndexing Fenwick Tree
        for(++idx; idx > 0; idx -= idx & -idx){
            result += mBit[idx];
        }
        return result;
    }

public:
    FenwickTree(std::vector<int> &a) : mBit(a.size() + 1, 0), mA(a), mSize(a.size() + 1)
    {
        //Initial Build
        for(int i = 0; i < a.size(); ++i){
            add(i, a[i]);
        }
    }

    //will update A[idx] = value
    void update(int idx, int value)
    {
        int delta = value - mA[idx]; //Calculating the difference b/w new value and the old value
        mA[idx] = value;             //Updating the original array
        add(idx, delta);             //Updating all the ranges containing idx
    }

    int query(int l, int r)
    {
        return sum(r) - sum(l - 1);
    }
};

int main()
{
    std::vector<int> arr = { 1, 3, 5 };
    FenwickTree ft(arr);
    std::cout << ft.query(0, 2) << '\n';
    ft.update(1, 2);
    std::cout << ft.query(0, 2) << '\n';
    return 0;
}