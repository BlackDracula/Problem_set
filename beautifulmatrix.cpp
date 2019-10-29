#include <bits/stdc++.h>
using std::cout;
using std::cin;
int main(){
    int arr[25];
    int size = sizeof(arr)/sizeof(*arr);
    int index;
    for(int i =0; i < size; i++){
        cin>>arr[i];
        if(arr[i]==1){
            index = i;
        }
    }
    if (index < 12){
        cout <<12-index;
    }else{
        cout <<index-12;
    }
    return 0;
}
