#include <iostream>

#include "ph_down_calculator.h"

void PDC::pd_calculator::pd_calculate()
{
    constexpr double Target_ph = 6.3;
    constexpr double Ph_down_ml = 0.1;
    constexpr double Ph_down_ph = 0.5;
    
    double Current_ph;
    double Water_liter;


    std::cout << "\n" << "Info: You need a Ph Down(BioBizz) and a Ph Meter.\n";

    std::cout << "\n" << "How much Ph have you current in your Water: ";
    std::cin >> Current_ph;

    std::cout << "How much Liter Water do you need: ";
    std::cin >> Water_liter; 

    
    if (Water_liter <= 0)
    {
        std::cout << "Error: No need to convert nothing!\n";
    }
    else
    {
        double Ph_difference = Current_ph-Target_ph;
        double Need_ph_down = Ph_difference/Ph_down_ph*Ph_down_ml*Water_liter;

        std::cout << "\n" << "You need " << Need_ph_down <<"-ml PH-Down, on " << Water_liter <<"-Liter Water to reach around " << Target_ph << "-Ph.\n" << "\n";
    }
}