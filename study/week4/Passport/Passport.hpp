#ifndef PASSPORT_HPP
#define PASSPORT_HPP
class Passport {
private:
    int number;
    char seria[2];
    static int lastNumber;
    static char lastSeria[2];
    std::string name;
    std::string surname;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
public:
    Passport();
    Passport(std::string, std::string, int, int, int);
    static void setSeriya(char[]);
    static void setSeriya(char[], int);
    void getData();
    static void getLastSN(); 
};
#endif
