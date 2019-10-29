#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::string;
int main(){
    string str;
    cin>>str;
    str.erase(std::remove(str.begin(), str.end(), '+'), str.end());
    std::stringstream convert(str);
    int x=0;
    convert >> x;
    char ss[str.size()];
    for (int i = 0; i < str.size(); i++){
        ss[i] = str[i];
    }
    int n = sizeof(ss)/sizeof(ss[0]);
    std::sort(ss, ss+n);
    int final_=str.size()-1;
    for (int j =0; j < str.size(); j++){
        cout<<ss[j];
        if (j < final_){
            cout<<"+";
        }
    }
    return 0;
}
