/*
->In Difference Array: if i = 0 then D[i] = A[i]
                     else  D[i] = A[i] - A[i - 1]
->Prefix Sum upto index i will give us the element A[i]

->It can Update(L, R, X) in O(1), where we have to add/subtract X to all elements in range [L, R].
->It must be use only when we need to find the answer(the final state of array) after performing all the queries. 
*/

#include <iostream>
#include <vector>

template <const size_t N>
class DifferenceArray
{
private:
    const size_t Size = N;
    int mArray[N + 1];

public:
    DifferenceArray(int *begin, int *end)
    {
        try
        {
            const size_t inSize = end - begin;
            if (inSize != Size)
            {
                throw "Error::Input array size do not match the provided size";
            }
            for (size_t i = 0; i < inSize; ++i)
            {
                mArray[i] = i ? begin[i] - begin[i - 1] : begin[i];
            }
        }
        catch (const char *_exception)
        {
            std::cerr << _exception;
            exit(1);
        }
    }

    DifferenceArray(std::vector<int> &arr)
    {
        try
        {
            const size_t inSize = arr.size();
            if (inSize != Size)
            {
                throw "Error::Input vector size do not match the provided size";
            }
            for (size_t i = 0; i < inSize; ++i)
            {
                mArray[i] = i ? arr[i] - arr[i - 1] : arr[i];
            }
        }
        catch (const char *_exception)
        {
            std::cerr << _exception;
            exit(1);
        }
    }

    //Will Add
    void Update(const int L, const int R, const int X)
    {
        try
        {
            if (L > R || L < 0 || R >= N)
            {
                throw "Error::Invalid Range";
            }
            mArray[L] += X;
            mArray[R + 1] -= X;
        }
        catch (const char *_exception)
        {
            std::cerr << _exception;
            exit(1);
        }
    }

    std::vector<int> GetArray()
    {
        std::vector<int> returnArray(N);
        int prefixSum = 0;
        for (size_t i = 0; i < Size; ++i)
        {
            prefixSum += mArray[i];
            returnArray[i] = prefixSum;
        }
        return returnArray;
    }
};


void print(const std::vector<int>& arr){
    for(int x : arr){
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> A = { 10, 5, 20, 40 };
    DifferenceArray<4> diffArray = A;
    diffArray.Update(0 , 1, 10);
    diffArray.Update(1, 3, 20);
    diffArray.Update(2, 2, 30);
    print(diffArray.GetArray());
    return 0;
}