#include <iostream>
#include <fstream>
#include <map>
#include <string>


int main()
{
    std::map<std::string, int> dictionary;

    std::fstream input("lorem.txt");
    if (input.is_open())
    {
        std::string word;

        while (getline(input, word))
        {
            std::cout << word << std::endl;
            if (dictionary.find(word) == dictionary.end())
            {
                dictionary.insert({ word,1 });
            }
            else
            {
                dictionary[word]++;
            }
            
        }
   }

    std::string tmp;
    std::cout << std::endl;
    std::cout << "Choose a word: " << std::endl;
    std::cin >> tmp;

    std::cout << "The word " << tmp << "appears " << dictionary[tmp] << " times." << std::endl;

    return 0;
}

