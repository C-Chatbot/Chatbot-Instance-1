#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>

std::map<std::string, std::string> loadData()
{
    std::map<std::string, std::string> training;

    std::vector<std::string> data;
    std::string line;
    std::ifstream inFile;
    inFile.open("Training Data.txt");
    while (getline(inFile, line))       // read text file line by line 
    {
        data.push_back(line);
    }
    inFile.close();

    // format data into map instead of vector
    for (std::vector<std::string>::size_type i = 0; i != data.size(); i += 2) 
    {
        std::cout << data[i] << " => " << data[i + 1] << std::endl;     // debugging statement
        training.insert(std::pair<std::string, std::string>(data[i], data[i + 1]));
    }

    return training;
}



int main()
{
    std::map<std::string, std::string> training = loadData();
    



    return 0;
}