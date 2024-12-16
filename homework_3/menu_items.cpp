#include "menu_items.hpp"
#include <cstddef>
#include "menu_functions.hpp"

// третий уровень 
const TRAVEL::MenuItem TRAVEL::VLADIVOSTOK = {
    "1 - Владивосток", TRAVEL::show_menu_leaf, &TRAVEL::DALNIY_VOSTOK
};
const TRAVEL::MenuItem TRAVEL::SAKHALIN = {
    "2 - Сахалин", TRAVEL::show_menu_leaf, &TRAVEL::DALNIY_VOSTOK
};
const TRAVEL::MenuItem TRAVEL::HABAROVSK = {
    "3 - Хабаровск", TRAVEL::show_menu_leaf, &TRAVEL::DALNIY_VOSTOK
};
const TRAVEL::MenuItem TRAVEL::BACK_TO_TRAVEL = {
    "0 - Выйти в предыдущее меню", TRAVEL::go_back, &TRAVEL::DALNIY_VOSTOK
};

namespace {
    const TRAVEL::MenuItem* const dal_children[] = {
        &TRAVEL::BACK_TO_TRAVEL, 
        &TRAVEL::VLADIVOSTOK, 
        &TRAVEL::SAKHALIN, 
        &TRAVEL::HABAROVSK, 
    };
    const int dal_size = sizeof(dal_children) / sizeof(dal_children[0]);
}

// второй уровень 
const TRAVEL::MenuItem TRAVEL::DALNIY_VOSTOK = {
    "1 - Дальний Воток", TRAVEL::show_menu, &TRAVEL::TRAVEL, dal_children, dal_size
};
const TRAVEL::MenuItem TRAVEL::ALTAI = {
    "2 - Алтай", TRAVEL::show_menu_leaf, &TRAVEL::TRAVEL
};
const TRAVEL::MenuItem TRAVEL::GOLDEN_RING = {
    "3 - Золотое Кольцо России", TRAVEL::show_menu_leaf, &TRAVEL::TRAVEL
};
const TRAVEL::MenuItem TRAVEL::BACK_TO_MAIN = {
    "0 - Выйти в главное меню", TRAVEL::go_back, &TRAVEL::TRAVEL
};

namespace {
    const TRAVEL::MenuItem* const travel_children[] = {
        &TRAVEL::BACK_TO_MAIN,
        &TRAVEL::DALNIY_VOSTOK,
        &TRAVEL::ALTAI,
        &TRAVEL::GOLDEN_RING
    };
    const int travel_size = sizeof(travel_children) / sizeof(travel_children[0]);
}

const TRAVEL::MenuItem TRAVEL::TRAVEL = {
    "1 - Путешествовать по России", TRAVEL::show_menu, &TRAVEL::MAIN, travel_children, travel_size
};

const TRAVEL::MenuItem TRAVEL::EXIT = {
    "0 - Закончить путешествия", TRAVEL::exit_program, &TRAVEL::MAIN
};

namespace {
    const TRAVEL::MenuItem* const main_children[] = {
        &TRAVEL::EXIT,
        &TRAVEL::TRAVEL
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const TRAVEL::MenuItem TRAVEL::MAIN = {
    "Главное меню: ", TRAVEL::show_menu_main, nullptr, main_children, main_size
};