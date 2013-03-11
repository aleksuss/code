#include <iostream>

using namespace std;

class Pass {
private:
    static int number;
    static char seria;
    std::string name;
    std::string surname;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
public:
    Pass() : dayOfBirth(1), monthOfBirth(1), yearOfBirth(1970) {
        if ( number < 999999 ) {
            number += 1;
        } //else if ( seria[0] == 'Z' && seria[1] == 'Z' && number == 999999 ) {
        //  std::cout << "Passports is over !" << endl;
        else if ( seria < 'Z' ) {
            seria += 1;
            number = 0;
        } else {
            std::cout << "Passports is over !" << endl;
            //seria[0] += 1;
            //seria[1] = 'A';
            //number = 0;
        }
    }
    Pass(string name, string surname, int day, int month, int year) : 
    name(name), surname(surname), dayOfBirth(day), monthOfBirth(month), yearOfBirth(year) { 
        
        if ( number < 999999 ) {
            number += 1;
        } //else if ( seria[0] == 'Z' && seria[1] == 'Z' && number == 999999 ) {
        //  std::cout << "Passports is over !" << endl;
        else if ( seria < 'Z' ) {
            seria += 1;
            number = 0;
        } else {
            std::cout << "Passports is over !" << endl;
            //seria[0] += 1;
            //seria[1] = 'A';
            //number = 0;
        }
    }
    
    void setSeriya(char s) {
        seria = s;
        //seria[1] = s[1];
        number = 0;
    }
    
    void setSeriya(char s, int n) {
        seria = s;
        //seria[1] = s[1];
        number = n;
    }
    void getData() {
        cout << "Name is: " << this->name << "Surname is " << this->surname << endl;
        cout << "Date of birth is: " << this->dayOfBirth << "/" << this->monthOfBirth << "/" << this->yearOfBirth << endl;
        cout << "Seria is: " << seria << number << endl;
        
    } 
};

int Pass::number = 0;

int main(void) {
    Pass alex("Alex", "Mok", 24, 10, 1980);
    
    
    return 0;
}

