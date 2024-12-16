#include "menu_functions.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

const TRAVEL::MenuItem* TRAVEL::show_menu_main(const MenuItem* current) {
    // показываем пункты меню
    cout << current->title << endl;
    for (int i = 1; i < current->children_count; i++) {
        cout << current->children[i]->title << endl;
    }
    cout << current->children[0]->title << endl;
    cout << "> ";

    int user_input;
    cin >> user_input;
    cout << endl;

    if (user_input < 0 || user_input >= current->children_count) {
        cout << "Неверный ввод, попробуйте снова." << endl;
        return current;
    }

    return current->children[user_input]; 
}

const TRAVEL::MenuItem* TRAVEL::show_menu(const MenuItem* current) {
    // показываеи пункты меню
    for (int i = 1; i < current->children_count; i++) {
        cout << current->children[i]->title << endl;
    }
    cout << current->children[0]->title << endl;
    cout << "> ";

    int user_input;
    cin >> user_input;
    cout << endl;

    if (user_input < 0 || user_input >= current->children_count) {
        cout << "Неверный ввод, попробуйте снова" << endl;
        return current;
    }
    
    return current->children[user_input];
}

const TRAVEL::MenuItem* TRAVEL::show_menu_leaf(const MenuItem* current) {
    cout << current->title << " - Здесь могла быть ваша информация о городе/регионе." << endl << endl;
    return current->parent;
}

const TRAVEL::MenuItem* TRAVEL::exit_program(const MenuItem* current) {
    std::exit(0);
}
const TRAVEL::MenuItem* TRAVEL::go_back(const MenuItem* current) {
    // переход к родительскому меню show_menu_leaf
    if (current->parent != nullptr) {
        return current->parent->parent ? current->parent->parent : current->parent;
    }
    return current;
}