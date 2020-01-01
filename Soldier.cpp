#include <iostream>

int main(int argc, char *argv[]){
    int cost,init,count;
    int temp=0;
    std::cin>>cost>>init>>count;
    for (int i = 1; i <= count; i++) {
    temp += cost*i;
    }
    temp -= init;
    if(temp <= 0){
        std::cout<<'0';
    }else {std::cout<<temp;}
    return 0;
}
/*3: cost of banana
4: no of banaan

1 = 3*1 = 3
2 = 3*2 = 6
3 = 3*3 = 9
4 = 3*4 = 12

18 + 12 = 30
30 - 17 = 13
*/

