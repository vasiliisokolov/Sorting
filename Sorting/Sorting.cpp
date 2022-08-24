#include <iostream>


int main()
{
    float first[15];
    
    std::cout << "Please, enter 15 numbers:" << std::endl;
    
    for (int i = 0; i < 15; i++)
    {
        std::cin >> first[i];
    }
	int temp;
    for(int i = 0; i < 14; i++)
    {
		for (int j = 0; j < 15 - i - 1; j++)
		{
			if (first[j] < first[j - 1])
			{
				temp = first[j];
				first[j] = first[j + 1];
				first[j + 1] = temp;
			}
			
		}

    }
    for (int i = 0; i < 15; i++) {
        std::cout << first[i] << " ";
    }
    
}


