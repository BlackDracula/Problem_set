#include <iostream>
#define line std::cout<<std::endl
using namespace std;
int main(int argc, char *argv[]) {
    int count = 4;
    static int x =0;
    static int line_count = 1;
    for (int i = 0; i <5; ++i) {
        for (int j = 0; j < count; j++) {
            std::cout<<x+1<<" ";
            x ++;
        }
        for ( int l=0; l<count; l ++ ){
            if (count == 3)
                std::cout<<x+9<< " ";
            if ( count == 4 )
                std::cout<<1 + 16<<" ";
        }
        count --;
        line;
        for (int k =0; k < line_count; k ++) {
            std::cout << "  ";

        }
        line_count ++;
    }
    return 0;
}



/*Output
1 2 3 4 17 18 19 20 -- > 16
  5 6 7 14 15 16 ----- > 9
    8 9 12 13 -------- > 4
      10 11 ---------- > 1*/




