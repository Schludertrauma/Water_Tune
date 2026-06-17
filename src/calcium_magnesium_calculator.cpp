#include <iostream>

#include "calcium_magnesium_calculator.h"

void CMC::cm_calculator::cm_calculate()
{
    constexpr double Magnesium_per_mol = 24.3; // 24.3g per Mol pure Magnesium weight

    double Calcium_water;
    double Magnesium_water;
    double Magnesium_sulfat;
    double Water_liter;
        
    std::cout << "Info: You need Bittersalt and the Water-Information from your Water-Provider.\n" << "\n";

    std::cout << "How much Calcium(mg) is in your Water: ";
    std::cin >> Calcium_water;

    std::cout << "How much Magnesium(mg) is in your Water: ";
    std::cin >> Magnesium_water;

    std::cout << "How much MgSO₄7H₂O(mg) is in your Bittersalt: ";
    std::cin >> Magnesium_sulfat;

    std::cout << "How much Water(l) would you like to tune: ";
    std::cin >> Water_liter;
    
    
    if (Water_liter <= 0)
    {
        std::cout << "Error: No need to convert nothing!\n";
    }
    else
    {
        double Calcium_magnesium_ratio = Calcium_water/3-Magnesium_water; // 3-1 Calcium to Magnesium ratio
        double Magnesium_pure_ratio = Magnesium_per_mol/Magnesium_sulfat;
        double Magnesium_per_liter = Calcium_magnesium_ratio/Magnesium_pure_ratio*Water_liter/1000;

        std::cout << "\n" << "You need " << Magnesium_per_liter << "-g Bittersalt on " << Water_liter << "-Liter Water, to have a 3-1 Calcium/Magnesium ratio.\n" << "\n";
    }   
}