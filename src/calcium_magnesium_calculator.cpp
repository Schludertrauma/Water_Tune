#include <iostream>
#include <fstream>

#include "calcium_magnesium_calculator.h"
#include "config.h"

void CMC::cm_calculator::cm_calculate()
{
    constexpr double magnesium_per_mol = 24.3; // 24.3g per Mol pure Magnesium weight

    std::ifstream file("../../../data/calmag_config.txt", std::ios::binary);
    if (!file.is_open())
    {
        std::cerr << "File can not be open!\n";
        return;
    }

    if (file.is_open())
    {
        file.seekg(0, std::ios::end);
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);

        if (size > 0)
        {
        
        }
        else
        {
            std::cerr << "File is empty - start configuration.\n" << "\n";
            CFG::cf_config cfg;
            cfg.cf_configuration();
        }       
    }
      
    std::string name_calcium_water;
    double value_calcium_water;
    if (file >> name_calcium_water >> value_calcium_water)
    {
        value_calcium_water;
    }
    
    std::string name_magnesium_water;
    double value_magnesium_water;
    if (file >> name_magnesium_water >> value_magnesium_water)
    {
        value_magnesium_water;
    }
      
    std::string name_magnesium_sulfat;
    double value_magnesium_sulfat;
    if (file >> name_magnesium_sulfat >> value_magnesium_sulfat)
    {
        value_magnesium_sulfat;
    }
    
    double water_liter;
    std::cout << "How much Water(l) would you like to tune: ";
    std::cin >> water_liter;
   
    if (water_liter <= 0)
    {
        std::cerr << "Error: No need to convert nothing!\n";
    }
    else
    {
        double calcium_magnesium_ratio = value_calcium_water/3-value_magnesium_water; // 3-1 Calcium to Magnesium ratio
        double magnesium_pure_ratio = magnesium_per_mol/value_magnesium_sulfat;
        double magnesium_per_liter = calcium_magnesium_ratio/magnesium_pure_ratio*water_liter/1000;

        std::cout << "\n" << "You need " << magnesium_per_liter << "-g Bittersalt on " << water_liter << "-Liter Water, to have a 3-1 Calcium/Magnesium ratio.\n" << "\n";
    }   
}