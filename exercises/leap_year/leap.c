#include "leap.h"

bool leap_year(int year) {
    bool isLeapYear = false;
    bool divisibleBy4 = (year % 4) == 0;
    bool divisibleBy100 = (year % 100) == 0;
    bool divisibleBy400 = (year % 400) == 0;

    if (divisibleBy4) {
        if (divisibleBy100 && divisibleBy400) {
            isLeapYear = true;
        } else if (!divisibleBy100) {
            isLeapYear = true;
        }
    }
    
    return isLeapYear;
}