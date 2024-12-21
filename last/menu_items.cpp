#include "menu_items.hpp"

#include "menu_functions.hpp"

#include <cstddef>

// 3 уровень меню
const KIE::MenuItem KIE::STUDY_GO_BACK_OTHER_TECH = {
   "0 - Выйти в предыдущее менню", KIE::study_go_back, &KIE::STUDY_OTHER_TECH
};
const KIE::MenuItem KIE::STUDY_DATEBASE = {
    "1 - Базы данных", KIE::study_datebase, &KIE::STUDY_OTHER_TECH
};
const KIE::MenuItem KIE::STUDY_MULTI_PROG = {
    "2 - Многопоточное программирование", KIE::study_multi_prog, &KIE::STUDY_OTHER_TECH
};
const KIE::MenuItem KIE::STUDY_NET_TECH = {
    "3 - Сетевые технологии", KIE::study_net_tech, &KIE::STUDY_OTHER_TECH
};

namespace {
    const KIE::MenuItem* const oth_tech_children[] = {
        &KIE::STUDY_GO_BACK_OTHER_TECH,
        &KIE::STUDY_DATEBASE,
        &KIE::STUDY_MULTI_PROG,
        &KIE::STUDY_NET_TECH,
    };
    const int study_oth_tech_size = sizeof(oth_tech_children) / sizeof(oth_tech_children[0]);
}

// 2 уровень меню
const KIE::MenuItem KIE::STUDY_GO_BACK= {
   "0 - Выйти в предыдущее менню", KIE::study_go_back, &KIE::STUDY
};
const KIE::MenuItem KIE::STUDY_PROG_LANG = {
    "1 - Изучать языки программирования", KIE::study_prog_lang, &KIE::STUDY
};
const KIE::MenuItem KIE::STUDY_ALG_STRUC = {
    "2 - Алгоритмы и структуры", KIE::study_alg_struc, &KIE::STUDY
};
const KIE::MenuItem KIE::STUDY_OTHER_TECH = {
    "3 - Другие технологии", KIE::show_menu, &KIE::STUDY, oth_tech_children, study_oth_tech_size
};

namespace {
    const KIE::MenuItem* const study_children[] = {
        &KIE::STUDY_GO_BACK,
        &KIE::STUDY_PROG_LANG,
        &KIE::STUDY_ALG_STRUC,
        &KIE::STUDY_OTHER_TECH,
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

// главное меню
const KIE::MenuItem KIE::STUDY = {
    "1 - Изучать программирование", KIE::show_menu, &KIE::MAIN, study_children, study_size
};
const KIE::MenuItem KIE::EXIT = {
    "0 - Пойти играть в футбол", KIE::exit, &KIE::MAIN
};

namespace {
    const KIE::MenuItem* const main_children[] = {
        &KIE::EXIT,
        &KIE::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KIE::MenuItem KIE::MAIN = {
    nullptr, KIE::show_menu, nullptr, main_children, main_size
};
const KIE::MenuItem KIE::MENU_1 = {
    nullptr, KIE::show_menu, nullptr, study_children, study_size
};