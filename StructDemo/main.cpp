//
//  main.cpp
//  StructDemo
//
//  Created by Павел Тимош on 24.04.2020.
//  Copyright © 2020 Павел Тимош. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * ┌╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┐
 * |Буддийские монастыри Японии периода                               |
 * ├╴╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥
 * |Название  |  Школа  |  Количество монахов  |  Площадь земли (га)  |
 * ├╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥
 * |Тодайдзи  |  Т      |  220                 |  368.8               |
 * ├╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥
 * |Якусидзи  |  С      |  50                  |  54.7                |
 * ├╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥
 * |Дайандзи  |  Д      |  10                  |  12.2                |
 * ├╴╴╴╴╴╴╴╴╴╴┴╴╴╴╴╴╴╴╴╴┴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥
 * |Примечание: Т - Тэндай; С - Сингон; Д - Дзедзицу                  |
 * └╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┘
 */

struct Monastery {
    string name;
    char type;
    int quantity;
    float square;
};


void editRow(Monastery* mon) {
    cout << "Row is:" << endl;
    cout << mon->name
        << " | " << setw(6) << mon->type
        << "  | " << setw(19) << mon->quantity
        << "  | " << setw(19) << mon->square
        << endl;
    cout << "Input new values" << endl;
    cout << "New name is " ;
    cin >> mon->name;
    
    cout << "New type is " ;
    cin >> mon->type;
    
    cout << "New quantity is " ;
    cin >> mon->quantity;
    
    cout << "New square is " ;
    cin >> mon->square;
    
}

Monastery inputRow() {
    Monastery res;
    
    cout << "Input monasterus' datas" << endl;
    
    cout << "Name is " ;
    cin >> res.name;
    
    cout << "Type is " ;
    cin >> res.type;
    
    cout << "Quantity is " ;
    cin >> res.quantity;
    
    cout << "Square is " ;
    cin >> res.square;
    
    return res;
}

void printRow(const Monastery & mon) {
    cout << "| "  << mon.name
        << " | " << setw(6) << mon.type
        << "  | " << setw(19) << mon.quantity
        << "  | " << setw(19) << mon.square
        << "  |" << endl;
}

void printHeader() {
    cout << "┌╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┐\n"
    << "|Буддийские монастыри Японии периода                               |\n"
    << "├╴╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥\n"
    << "|Название  |  Школа  |  Количество монахов  |  Площадь земли (га)  |\n"
    << "├╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┼╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥\n";
}

void printFooter() {
    cout << "└╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┘\n";
}

void printTable(const Monastery* mons, size_t size) {
    printHeader();
    
    for (size_t i = 0; i < size; ++i) {
        printRow(mons[i]);
    }
    
    printFooter();
}


int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    const size_t N = 10;
    size_t count = 3;
    
    Monastery monasterys[N] = { { "Тодайдзи", 'T', 220, 368.8 },
       { "Якусидзи", 'K', 50, 54.7 },
       { "Дайандзи", 'D', 10, 12.2 }
    };
    
    printTable(monasterys, count);
    
    monasterys[count] = inputRow();
    count++;
    
    printTable(monasterys, count);
    
    
    size_t num;
    cout << "Input number row: ";
    cin >> num;
    editRow(&monasterys[num]);
    
    printTable(monasterys, count);
    
    return 0;
}
