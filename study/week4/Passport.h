#ifndef __Passport_h
#define __Passport_h

class Passport {
private:
    static int number;
    static char seria[2];
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
};

int Passport::number = 0;
char Passport::seria[2] = { 'A', 'A' };

#endif
