#include <iostream>

bool binarySearch(int array[], int num, int size_array)
{
    int start = 0;
    int end = size_array - 1;

    while (end >= start)
    {
    int mid = start + end / 2;
    if (array[mid] == num)
    {
        std::cout<<mid<<std::endl;
        return true;
    }else if(num < array[mid]){
        end = mid - 1;
    }else{
        start = mid + 1;
    }
    
    }
      return false;
    
}

int main ()
{
    int N = 0;
    std::cout<<"Please enter the size of the array: "<<std::endl;
    std::cin>>N;

    int myArray[N];
    for (int i = 0; i < N; i++)
    {
        std::cout<<"Please enter the elements of the array in order from least to greatest: "<<std::endl;
        std::cin>>myArray[i];
    }

    int find_num = 0;
    std::cout<<"Please enter the number you wish to look for: "<<std::endl;
    std::cin>>find_num;

    
    if (binarySearch(myArray,find_num,N))
    {
        std::cout<<"success"<<std::endl;
    }else{
        std::cout<<"not found"<<std::endl;
    }
    
}