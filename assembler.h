#include <iostream>
#include <fstream>
#include <vector>

int tokenSize = 0;
std::vector<char> tokens;

void readFile(char *fileName)
{
    std::ifstream file;
    file.open(fileName);

    if (!file.is_open())
    {
        std::cout << "Could not open file: " << fileName << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        int i = 0;
        char curr;
        while (!file.eof()) {
            file.get(curr);
            tokens.push_back(curr);
            i++;
            tokenSize++;
        }

        i = 0;
        for (int i = 0; i < tokenSize; i++) {
            std::cout << tokens[i] << std::endl;
        }
    }
}