#ifndef MAGICAN_HPP
#define MAGICAN_HPP

class Magican {
private:
    static Magican* lastMagican;
    static int id;
    std::string name;
public:
    Magican();
    Magican(Magican& m);
    static int getId();
    std::string getName();
    void setName(std::string n);
    static std::string getLastName();
};

#endif
