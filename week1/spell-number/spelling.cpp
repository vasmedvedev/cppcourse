#include <string>
#include <map>
#include "spelling.h"
#include <iostream>

std::string spell_ones(int number) {
    if (0 >= number || number >= 10) {
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

std::string spell_dozens(int number) {
    if (1 >= number || number >= 10) {
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

std::string spell_tenths(int number) {
    if (9 <= number || number >= 20) {
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

std::string spell_hundreds(int number) {
    std::map<int, std::string> Spelling = {
            {1, "сто"},
            {2, "двести"},
            {3, "триста"},
            {4, "четыреста"},
            {5, "пятьсот"},
            {6, "шестьсот"},
            {7, "семьсот"},
            {8, "восемьсот"},
            {9, "девятьсот"}
    };
    if (Spelling.count(number) == 0) {
        exit(1);
    }
    return Spelling[number];
}

std::string spell(int number) {
    if (1 < number || number > 999) {
        exit(1);
    }
    std::string result;
    std::string str_number = std::to_string(number);
    unsigned long size = str_number.size();

    bool teens = size >= 2 && str_number[size - 2] == '1';
    std::cout << "Teens: " << teens;

    int iteration_shift;

    if (teens && size == 2) {
        return spell_tenths(number);
    } else if (teens) {
        iteration_shift = 3;
    } else {
        iteration_shift = 0;
    }

    for (std::string::size_type i = size - iteration_shift; i >= 0; --i) {
        switch(i) {
            case 2:
                result.insert(0, spell_ones(std::stoi(str_number[i])));
                break;
            case 1:
                result.insert(0, spell_dozens(std::stoi(str_number[i])));
                result.insert(0, " ");
                break;
            case 0:
                result.insert(0, spell_hundreds(std::stoi(str_number[i])));
                break;
            default:
                break;
        }
    }
    return result;
}
