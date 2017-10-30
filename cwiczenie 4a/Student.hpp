/**
 * @file Student.hpp
 * @author Adam Wolniakowski
 * @date 24-09-2017
 *
 * @brief Plik naglowkowy dla klasy Student
 *
 * Szczegolowy opis pliku...
 */

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>


/**
 * @class Student
 * @brief Reprezentuje studenta
 */
class Student {
public:

    /**
     * @brief Konstruktor.
     * @param imie [in] imie studenta
     * @param nazwisko [in] nazwisko studenta
     * @param wiek [in] wiek studenta
     */
    Student(
         const std::string& imie,
         const std::string& nazwisko,
         int wiek
         ) :
             _imie(imie),
             _nazwisko(nazwisko),
             _wiek(wiek) {}

    //! Destruktor.
    virtual ~Student() {};

    /**
     * @brief Wyswietla powitanie.
     *
     * Wyswietla powitanie w formacie: Witam, nazywam sie imie nazwisko i mam wiek lat.
     */
    void przedstaw_sie() const;

private:
    std::string _imie;
    std::string _nazwisko;
    int _wiek;
};

#endif // STUDENT_HPP
