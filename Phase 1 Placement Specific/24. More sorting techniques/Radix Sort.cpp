#include<bits/stdc++.h>
using namespace std;


void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// used for swapping i and j element of array
void swap(vector<int> &arr, int i, int j) {
    cout << "Swapping " << arr[i] << " and " << arr[j] << endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void countSort(vector<int> & arr, int expo){
    
    vector<int> freq(10);
    vector<int> answ(arr.size());
    //to update frequencies of elements in freq arr
    for(int i=0;i<arr.size();i++){
        freq[(arr[i]/expo)%10]++;
    }
    
    //to make freq arr, a cumulative freq arr
    for(int i=1;i<freq.size();i++){
        freq[i]=freq[i]+freq[i-1];
    }
    
    // stable sorting(filling answ arr)
    // iterate over the main arr
    // find index at which element freq is present
    // now reduce that freq
    for(int i=arr.size()-1;i>=0;i--){
        int pos=freq[arr[i]/expo%10]-1;
        answ[pos]=arr[i];
        freq[arr[i]/expo%10]--;
        
    }
    
    // filling original arr with answ arr
    for(int i=0;i<arr.size();i++)
    arr[i]=answ[i];
    
    cout<<"After sorting on "<<expo<<" place -> ";
    
    print(answ);
    
}


void radixSort(vector<int> &arr){
    int maxx=INT_MIN;
    for(int val:arr){
        if(val>maxx)
        maxx=val;
    }
    
    int expo=1;
    while(expo<=maxx){
        countSort(arr,expo);
        expo=expo*10;
    }
}


int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxx=INT_MIN;
    int minn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxx=max(arr[i],maxx);
        minn=min(arr[i],minn);
    }
    
    
    radixSort(arr);
    
    print(arr);
    
    return 0;
}