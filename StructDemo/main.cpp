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
        << " | " << setw(20) << mon.type
        << " | " << setw(5) << mon.quantity
        << " | " << setw(7) << mon.square
        << " |" << endl;
}

void printHeader() {
    cout << "┌╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┐\n"
    << "|Буддийские монастыри Японии периода                               |\n"
    << "├╴╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┬╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴┥\n";
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
    
    
    
    
    return 0;
}
