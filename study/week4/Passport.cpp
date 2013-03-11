#include <iostream>

#include "Passport.h"

using namespace std;

Passport::Passport() : 
    name("Unknown"), surname("Uknown"), dayOfBirth(1), monthOfBirth(1), yearOfBirth(1970) {
        if ( number < 999999 ) {
            number += 1;
        } else if ( seria[0] == 'Z' && seria[1] == 'Z' && number == 999999 ) {
            std::cout << "Passports is over !" << endl;
        } else if ( seria[1] < 'Z' ) {
            seria[1] += 1;
            number = 0;
        } else {
            seria[0] += 1;
            seria[1] = 'A';
            number = 0;
        }
}

Passport::Passport(string name, string surname, int day, int month, int year) {
    this->name = name;
    this->surname = surname;
    dayOfBirth = day;
    monthOfBirth = month;
    yearOfBirth = year;
    if ( number < 999999 ) {
        number += 1;
    } else if ( seria[0] == 'Z' && seria[1] == 'Z' && number == 999999 ) {
        std::cout << "Passports is over !" << endl;
    } else if ( seria[1] < 'Z' ) {
        seria[1] += 1;
        number = 0;
    } else {
        seria[0] += 1;
        seria[1] = 'A';
        number = 0;
    }    
}

void Passport::setSeriya(char s[]) {
    seria[0] = s[0];
    seria[1] = s[1];
    number = 0;
}

void Passport::setSeriya(char s[], int n) {
    seria[0] = s[0];
    seria[1] = s[1];
    number = n;
}

void Passport::getData() {
    cout << "Name is: " << this->name << "Surname is " << this->surname << endl;
    cout << "Date of birth is: " << this->dayOfBirth << "/" << this->monthOfBirth << "/" << this->yearOfBirth << endl;
    cout << "Seria is: " << seria[0] << seria[1] << number << endl;
    
}
