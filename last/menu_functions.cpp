﻿#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const KIE::MenuItem* KIE::show_menu(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const KIE::MenuItem* KIE::exit(const MenuItem* current) {
    std::exit(0);
}

const KIE::MenuItem* KIE::study_summ(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_substract(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_multiply(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_divide(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_go_back(const MenuItem* current) {
    // TODO
    std::cout<< current->title << std::endl << std::endl;
    return current->parent->parent;
}
// третий уровень
const KIE::MenuItem* KIE::study_db(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_concurrent_prog(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_net_tech(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KIE::MenuItem* KIE::study_go_back_other_tech(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}