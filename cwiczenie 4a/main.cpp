/**
 * @file main.cpp
 * @author Adam Wolniakowski
 * @date 24-09-2017
 *
 * @brief Glowny plik projektu.
 *
 * Szczegolowy opis pliku...
 */

#include <iostream>
#include "Student.hpp"


using namespace std;


/**
 * @brief Glowna funkcja programu
 *
 * Szczegolowy opis funkcji...
 *
 * @param argc [in] ilosc argumentow
 * @param argv [in] parametry linii komend
 * @return kod bledu
 */
int main(int argc, char* argv[]) {

    Student* student = new Student("imie", "nazwisko", 20);

    student->przedstaw_sie();

    delete student;

    return 0;
}
