#include <iostream>
#include <fstream>

#include "config.h"

void CFG::cf_config::cf_configuration()
{
    std::ofstream file("../../../data/calmag_config.txt");
    if (!file.is_open())
    {
        std::cerr << "File can not be open!\n";
        return;
    }
    
    std::string name_calcium_water = "calcium_water ";
    double value_calcium_water;

    std::string name_magnesium_water = "magnesium_water ";
    double value_magnesium_water;
    
    std::string name_magnesium_sulfat = "magnesium_sulfat ";
    double value_magnesium_sulfat;

    std::cout << "Info: You need Bittersalt and the Water-Information from your Water-Provider.\n" << "\n";

    std::cout << "How much Calcium(mg) is in your Water: ";
    std::cin >> value_calcium_water;
    if (value_calcium_water <= 0)
    {
        std::cerr << "No need for nothing!\n";
    }
    else
    {
        file << name_calcium_water << value_calcium_water << "\n";
            if (file.fail())
            {
                std::cerr << "Data can not be saved!\n";
            }
    }
    
    std::cout << "How much Magnesium(mg) is in your Water: ";
    std::cin >> value_magnesium_water;
    if (value_magnesium_water <= 0)
    {
        std::cerr << "No need for nothing!\n";
    }
    else
    {
        file << name_calcium_water << value_magnesium_water << "\n";
            if (file.fail())
            {
                std::cerr << "Data can not be saved!\n";
            }
    }
    
    std::cout << "How much MgSO₄7H₂O(mg) is in your Bittersalt: ";
    std::cin >> value_magnesium_sulfat;
    if (value_magnesium_sulfat <= 0)
    {
        std::cerr << "No need for nothing!\n";
    }
    else
    {
        file << name_magnesium_sulfat << value_magnesium_sulfat << "\n";
            if (file.fail())
            {
                std::cerr << "Data can not be saved!\n";
            }
    }
    
    file.close();

    std::cout << "\n" << "File saved.\n" << "\n";
}