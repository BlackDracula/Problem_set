#include <iostream>

const int size = 5;
long long array_[size];
long long array__[size];

long long find_min(long long num[],int size)
{
    long long temp = num[0];
    for ( int i =0; i< size; i ++)
    {
        if(temp > num[i])
        {
            temp = num[i];
        }    
    }
    return temp;
}

long long find_max(long long num[],int size)
{
    long long temp = num[0];
    for ( int i =0; i< size; i ++)
    {
        if(temp < num[i])
        {
            temp = num[i];
        }    
    }
    return temp;
}

int main()
{
    long long total =0;
    for ( int i =0; i<size; i++)
    {
        std::cin>>array_[i];
        total += array_[i];
    }
    for ( int i =0; i < size; i++)
    {
        array__[i] = (total-array_[i]);
    }
    
    std::cout<<find_min(array__,size)<<" "<<find_max(array__,size);
}
