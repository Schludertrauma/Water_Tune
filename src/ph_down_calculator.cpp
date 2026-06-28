#include <iostream>

#include "ph_down_calculator.h"

void PDC::pd_calculator::pd_calculate()
{
    constexpr double target_ph = 6.3;
    constexpr double ph_down_ml = 0.1;
    constexpr double ph_down_ph = 0.5;
    
    double current_ph;
    double water_liter;


    std::cout << "\n" << "Info: You need a Ph Down(BioBizz) and a Ph Meter.\n";

    std::cout << "\n" << "How much Ph have you current in your Water: ";
    std::cin >> current_ph;
    if (current_ph <= target_ph)
    {
        std::cerr << "Error: No pH Up calculation!\n";
    }
    
    std::cout << "How much Liter Water do you need: ";
    std::cin >> water_liter; 
  
    if (water_liter <= 0)
    {
        std::cerr << "Error: No need to convert nothing!\n";
    }
    else
    {
        double ph_difference = current_ph-target_ph;
        double need_ph_down = ph_difference/ph_down_ph*ph_down_ml*water_liter;

        std::cout << "\n" << "You need " << need_ph_down <<"-ml PH-Down, on " << water_liter <<"-Liter Water to reach around " << target_ph << "-Ph.\n" << "\n";
    }
}