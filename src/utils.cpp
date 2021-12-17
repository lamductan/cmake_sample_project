#include <dirent.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <algorithm>
#include <sys/time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "sample-project/utils.h"

std::string intToStr(int num) {
    return std::to_string(num);
}

int strToInt(const std::string& str) {
    return std::stoi(str, nullptr, 10);
}

std::string _readLastLineOfFile(const std::string& filePath) {
    std::ifstream fin;
    fin.open(filePath);
    if(fin.is_open()) {
        fin.seekg(-1, std::ios_base::end);          // go to one spot before the EOF

        bool keepLooping = true;
        while(keepLooping) {
            char ch;
            fin.get(ch);                            // Get current byte's data

            if((int)fin.tellg() <= 1) {             // If the data was at or before the 0th byte
                fin.seekg(0);                       // The first line is the last line
                keepLooping = false;                // So stop there
            }
            else if(ch == '\n') {                   // If the data was a newline
                keepLooping = false;                // Stop at the current position.
            }
            else {                                  // If the data was neither a newline nor at the 0 byte
                fin.seekg(-2, std::ios_base::cur);  // Move to the front of that data, then to the front of the
                                                    // data before it
            }
        }

        std::string lastLine;            
        getline(fin, lastLine);                      // Read the current line
        fin.close();
        return lastLine;
    }
    return "";
}

int countLine(const std::string& filePath) {
    std::ifstream inFile(filePath); 
    std::count(std::istreambuf_iterator<char>(inFile), 
               std::istreambuf_iterator<char>(), '\n');
}

void _appendToFile(
        const std::string& filepath, const std::string& content_to_write) {
    FILE* f = fopen(filepath.c_str(), "a");
    if (f != NULL) { 
        fwrite(
            content_to_write.c_str(), 1,
            content_to_write.length(), f);
        fwrite("\n", 1, 1, f);
        fclose(f);
    }
}

std::vector<std::string> splitString(const std::string& s, char delimiter) {
    std::stringstream ss(s);
    std::string token;
    std::vector<std::string> tokens;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}
