/**
 * @file Student.cpp
 * @author Adam Wolniakowski
 * @date 24-09-2017
 *
 * @brief Plik zrodlowy dla klasy Student
 *
 * Szczegolowy opis pliku...
 */

#include "Student.hpp"


using namespace std;


void Student::przedstaw_sie() const {
    cout << "Nazywam sie " << _imie << " " << _nazwisko << " i mam " << _wiek << " lat." << endl;
}
