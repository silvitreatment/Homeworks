#pragma once 
#include "menu.hpp"

namespace TRAVEL {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* show_menu_main(const MenuItem* current);
    const MenuItem* show_menu_leaf(const MenuItem* current);
    const MenuItem* exit_program(const MenuItem* current);
    const MenuItem* go_back(const MenuItem* current);
}