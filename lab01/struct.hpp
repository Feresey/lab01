#ifndef STRUCT_H
#define STRUCT_H
#include <iostream>

const int MAX = 1000;
const int LEN = 64;
const int DATE_LENGTH = 3; //Day, mounth and year
const int DAY = 0, MONTH = 1, YEAR = 2;
const int TIME_LENGTH[3] = {2, 2, 4};
const int DECIMAL = 10;
const std::string empty_string(64, '\0');

typedef struct
{
    int date[DATE_LENGTH]; //Day, mounth and year
    std::string *line;     //указатель на строку (для экономии памяти)
} TKey;

TKey AddKey(std::string input, std::string *line);

void RadixSort(TKey *buf1, TKey *buf2, const int date, const int current_bit);

#endif //STRUCT_H
