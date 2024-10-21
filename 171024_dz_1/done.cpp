#include <iostream>

int main() {
    std::cout << "введите день: ";
    int day;
    std::cin >> day;

    std::cout << "введите месяц (от 3 до 14, март - 3, январь - 13, февраль - 14): ";
    int month;
    std::cin >> month;

    std::cout << "введите год: ";
    int year;
    std::cin >> year;

    if (month == 13 and month == 14) {
        year--;
    }

    int first_num, last_num;
    last_num = year % 100;
    first_num = year / 100;

    int week_day;
    week_day = (
			day 
			+ ((13 * (month + 1)) / 5)
			+ last_num 
			+ (last_num / 4)
			+ (first_num / 4) 
			- (2 * first_num)
		) % 7;

    switch (week_day) {
    case 0: 
		std::cout << "суббота" << std::endl; 
		break;
    case 1: 
	    std::cout << "воскресенье" << std::endl; 
	    break;
    case 2: 
	    std::cout << "понедельник" << std::endl; 
	    break;
    case 3: 
	    std::cout << "вторник" << std::endl; 
	    break;
    case 4: 
	    std::cout << "среда" << std::endl;
	    break;
    case 5: 
	    std::cout << "четверг" << std::endl; 
	    break;
    case 6: 
	    std::cout << "пятница" << std::endl; 
	    break;
    default: 
	    std::cout << "ошибка" << std::endl; 
	    break;
    }
}