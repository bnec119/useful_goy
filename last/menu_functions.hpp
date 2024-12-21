#pragma once

#include "menu.hpp"

namespace KIE {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
	
    const MenuItem* study_go_back(const MenuItem* current);
    const MenuItem* study_prog_lang(const MenuItem* current);
    const MenuItem* study_alg_struc(const MenuItem* current);

	const MenuItem* study_datebase(const MenuItem* current);
    const MenuItem* study_multi_prog(const MenuItem* current);
    const MenuItem* study_net_tech(const MenuItem* current);

}
