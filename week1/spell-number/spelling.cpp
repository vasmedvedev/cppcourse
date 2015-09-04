#include <string>
#include <map>
#include "spelling.h"
#include <iostream>

std::string spell_ones(int number) {
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

    if (Spelling.count(number) == 0) {
        exit(1);
    }

    return Spelling[number];
}

std::string spell_dozens(int number) {
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
    if (Spelling.count(number) == 0) {
        exit(1);
    }
    return Spelling[number];
}

std::string spell_tenths(int number) {
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
    if (Spelling.count(number) == 0) {
        exit(1);
    }
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
    if (1 > number || number > 999) {
        exit(1);
    }

    int hundreds = (number / 100) % 100;
    int dozens = (number / 10) % 10;
    int units = number % 10;

    std::string result;
    std::string space = " ";
    std::string nothing = "";

    result += hundreds > 0 ? spell_hundreds(hundreds) + space : nothing;
    result += dozens > 1 ? spell_dozens(dozens) + space : nothing;
    result += dozens == 1 ? spell_tenths(10 + units) + space : nothing;
    result += units > 0 && dozens != 1 ? spell_ones(units) : nothing;
    return result;
}
