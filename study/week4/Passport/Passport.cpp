#include <iostream>
#include "Passport.hpp"

using namespace std;

Passport::Passport() : 
    name("Unknown"), surname("Unknown"), dayOfBirth(1), monthOfBirth(1), yearOfBirth(1970) {
        if ( lastNumber < 999999 ) {
            lastNumber += 1;
            number = lastNumber;
            seria[0] = lastSeria[0];
            seria[1] = lastSeria[1];
        } else if ( lastSeria[0] == 'Z' && lastSeria[1] == 'Z' && lastNumber == 999999 ) {
            std::cout << "Passports is over !" << endl;
        } else if ( lastSeria[1] == 'Z' ) {
            lastSeria[0] += 1;
            lastSeria[1] = 'A';
            lastNumber = 0;
            number = lastNumber;
            seria[0] = lastSeria[0];
            seria[1] = lastSeria[1];
        } else {
            lastSeria[0] = 'A';
            lastSeria[1] += 1;
            lastNumber = 0;
            number = lastNumber;
            seria[0] = lastSeria[0];
            seria[1] = lastSeria[1];
        }
        
}
Passport::Passport(string name, string surname, int day, int month, int year) : 
    name(name), surname(surname), dayOfBirth(day), monthOfBirth(month), yearOfBirth(year) { 
        if ( lastNumber < 999999 ) {
            lastNumber += 1;
            number = lastNumber;
            seria[0] = lastSeria[0];
            seria[1] = lastSeria[1];
        } else if ( lastSeria[0] == 'Z' && lastSeria[1] == 'Z' && lastNumber == 999999 ) {
            std::cout << "Passports is over !" << endl;
        } else if ( lastSeria[1] == 'Z' ) {
            lastSeria[0] += 1;
            lastSeria[1] = 'A';
            lastNumber = 0;
            number = lastNumber;
            seria[0] = lastSeria[0];
            seria[1] = lastSeria[1];
        } else {
            lastSeria[0] = 'A';
            lastSeria[1] += 1;
            lastNumber = 0;
            number = lastNumber;
            seria[0] = lastSeria[0];
            seria[1] = lastSeria[1];
        }
        
}
void Passport::setSeriya(char s[]) {
    lastSeria[0] = s[0];
    lastSeria[1] = s[1];
    lastNumber = 0;
}
void Passport::setSeriya(char s[], int n) {
    lastSeria[0] = s[0];
    lastSeria[1] = s[1];
    lastNumber = n;
}
void Passport::getData() {
    cout << "Name is: " << name << ", Surname is: " << surname << endl;
    cout << "Date of birth is: " << dayOfBirth << "/" << monthOfBirth << "/" << yearOfBirth << endl;
    cout << "Seria is: " << seria;
    printf("%06d\n", number);
}
void Passport::getLastSN() {
    cout << "Last Serias and number is: " << lastSeria;
    printf("%06d\n", lastNumber);
}
int Passport::lastNumber = 0;
char Passport::lastSeria[2] = { 'A', 'A' };
