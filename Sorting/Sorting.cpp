#include <iostream>

int find_smallest(float&);

int main()
{
    float first[15];
    float second[15];
    float temp;
    std::cout << "Please, enter 15 numbers:" << std::endl;
    
    for (int i = 0; i < 15; i++)
    {
        std::cin >> first[i];
        std::cout << first[i];
    }
    for(int i = 0; i < 15; i++)
    {


    }
}

int find_smallest(float& first[15])
{
    int smallest = first[0];
    int smallestIndex = 0;
    for (int i = 1; i < 15; i++)
    {
        if (first[i] < smallest)
        {
            smallest = first[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}


