#include <iostream>
#include <locale>
#include <format>
#include "ConsoleColor.h"

/*#include <iomanip>
#include <limits>
std::setprecision(2);*/

int main()
{
    float rate;
    std::cout << "\ncurrent rate per hour:\n ";
    std::cin >> rate;
    float ratehour = rate / 60.f;
    std::cout << "current rate per minute is: " << green << ratehour << white << std::endl;
    float hours1, hours2, minutes1, minutes2;
    std::cout << "from hour: " << std::endl;
    std::cin >> hours1 >> minutes1;
    std::cout << "to hour: " << std::endl;
    std::cin >> hours2 >> minutes2;

    float hours_result = hours2 - hours1;
    float minutes_result = minutes2 - minutes1;
    float hours_result2 = hours_result * 60.f;
    std::cout << "RESULT HOURS: " << hours_result2 << std::endl;
    std::cout << "RESULT MINUTES: " << minutes_result << std::endl;
    float result = (hours_result2 + minutes_result) * ratehour;
    std::cout << "\nresult is: " << green << result << white << "EUR" << std::endl;
    std::cout << std::format("worked hours: {:.0f}:{:0>2.0f} {:.0f}:{:0>2.0f} {:.2f}", hours1, minutes1, hours2, minutes2, result);
    return main();
}

