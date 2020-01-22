#include <iostream>

long long find_max(long long array_[],int size)
{
    long long temp = array_[0];
    for ( int i=0; i< size; i++)
    {
        if (temp < array_[i])
        {
            temp = array_[i];
        }
    }
    return temp;
}

int main()
{
    int size;
    std::cin>>size;
    long long array_[size];
    int answer  =0;
    for ( int i =0; i < size; i++)
    {
        std::cin>>array_[i];
    }
    for( int i =0; i<size; i ++)
    {
        if ( array_[i] == find_max(array_,size))
        {
            answer++;
        }
        
    }
    std::cout<<answer;
}
