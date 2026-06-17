#include <iostream>

#include "calcium_magnesium_calculator.h"
#include "ph_down_calculator.h"

int main()
{
    int menu_choice;

    do
    {
        std::cout << "Water Tune Menu\n" << "\n";
        std::cout << "1: Calcium Magnesium Calculator\n";
        std::cout << "2: Ph Down Calculator\n";
        std::cout << "3: Exit\n" << "\n";

        std::cout << "Menu choice: ";
        std::cin >> menu_choice;
        std::cout << "\n";

        switch (menu_choice)
            {
            case 1:
                CMC::cm_calculator cmc;
                cmc.cm_calculate();
                break;

            case 2:
                PDC::pd_calculator pdc;
                pdc.pd_calculate();
                break;

            case 3:
                std::cout << "Thanks for using Water Tune!\n";
                exit(0);
                break;

            default:
                std::cout << "Press 1,2 or 3\n";
                break;
            } 

    }while (menu_choice != 3);
}