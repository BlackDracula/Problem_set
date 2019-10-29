#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::string;
int main(int argc, char** argv){
    string s;
    cin>>s;
    char ss[s.size()];
    for (int i=0; i<s.size(); i++){
        ss[i]=s[i];
    }
        std::putchar(std::toupper(ss[0]));
        for (int k=1; k<s.size(); k++){
            cout<<ss[k];
        }

    return 0;
}
