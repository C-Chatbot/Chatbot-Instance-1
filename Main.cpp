#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

std::map<std::string, std::string> loadData()
{
    std::map<std::string, std::string> training;

    std::vector<std::string> data;
    std::string line;
    std::ifstream inFile;
    inFile.open("Training Data.txt");
    while (getline(inFile, line))       // reads text file
    {
        data.push_back(line);
    }
    inFile.close();

    // format data into map instead of vector
    for (std::vector<std::string>::size_type i = 0; i != data.size(); i += 2) 
    {
        std::cout << data[i] << " => " << data[i + 1] << std::endl;
        training.insert(std::pair<std::string, std::string>(data[i], data[i + 1]));
    }

    return training;
}

std::string keyword(std::string text)  //(hopefully) Searches for any keywords listed in specified file and erases them from input. 
{
    std::string line;
    std::ifstream inFile;
    inFile.open("Keywords/Extras.txt");
    while (getline(inFile, line))
    {
        text.replace(0, line.length(), line);
    }
    inFile.close();
    return text;
}

int main()
{
    std::map<std::string, std::string> training = loadData();
    



    return 0;
}