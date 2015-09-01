#include <iostream>
#include <string>
#include <map>

std::string spell_ones(const int number) {
    if (0 >= number && number >= 10) {
        exit(1);
    }
    std::map<int, std::string> Spelling;
    Spelling[1] = "один";
    Spelling[2] = "два";
    Spelling[3] = "три";
    Spelling[4] = "четыре";
    Spelling[5] = "пять";
    Spelling[6] = "шесть";
    Spelling[7] = "семь";
    Spelling[8] = "восемь";
    Spelling[9] = "девять";
    return Spelling[number];
}

std::string spell_dozens(const int number) {
    if (1 >= number && number >= 10) {
        exit(1);
    }
    std::map<int, std::string> Spelling = {
        {2, "двадцать"},
        {3, "тридцать"},
        {4, "сорок"},
        {5, "пятьдесят"},
        {6, "шестьдесят"},
        {7, "семьдесят"},
        {8, "восемьдесят"},
        {9, "девяносто"}
    };
    return Spelling[number];
}

std::string spell_tenths(const int number) {
    if (9 <= number && number >= 20) {
        exit(1);
    }
    std::map<int, std::string> Spelling = {
            {10, "десять"},
            {11, "одиннадцать"},
            {12, "двенадцать"},
            {13, "тринадцать"},
            {14, "четырнадцать"},
            {15, "пятнадцать"},
            {16, "шестнадцать"},
            {17, "семнадцать"},
            {18, "восемнадцать"},
            {19, "девятнадцать"}
        };
    return Spelling[number];
}

int main() {
    return 0;
}