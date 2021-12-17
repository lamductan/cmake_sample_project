#ifndef SAMPLE_PROJECT_UTILS_H_
#define SAMPLE_PROJECT_UTILS_H_

#include <cstdio>
#include <string>
#include <vector>

std::string intToStr(int num);
int strToInt(const std::string& str);
std::string _readLastLineOfFile(const std::string& filepath);
int countLine(const std::string& filePath);
void _appendToFile(const std::string& filepath, const std::string& content_to_write);
std::vector<std::string> splitString(const std::string& s, char delimiter);

#endif // SAMPLE_PROJECT_UTILS_H_
