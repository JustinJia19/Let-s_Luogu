#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    set<int> array = {};
    for(int i=0;i<n;i++){
        int x;
        cin >>x;
        array.insert(x);
        arr[i] = x;
    }
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(array.find(arr[i] + arr[j])!=array.end()){
                count++;
                array.erase(arr[i]+arr[j]);
            } 
        }
    }
    cout<<count;
}
