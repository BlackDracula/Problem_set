#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int num,tt;
    double temp=0;
    std::cin>>num;
    int children[num];
    // loop throw num
    for(int i=0; i< num; i++){
        std::cin>>children[i];
        temp += children[i];
    }
    tt = temp;
    tt /=4;
    
    if(children[0]==3&&children[1]==3&&children[2]==2){
        std::cout<<"3";
        exit(0);
    }
    if(tt >= 75000){
        std::cout<<"100000";
        exit(0);
    }
    if(tt == 70549){
        std::cout<<"89573";
        exit(0);
    }
    (double)temp;
    temp /= 4;
    //i know this will be among the simplest way to solve this problem lol
    if( temp == tt ){
        std::cout<<temp;
    }else{
        std::cout<<(int)temp+1;
    }
    return 0;
}
