#ifndef IDENTIFIRABLE_HPP
#define IDENTIFIRABLE_HPP

class Identifirable {
private:
    static int id;
    int ident;
    
public:
    Identifirable();
    Identifirable(const Identifirable& i);
    static int getId();
    int getIdent() const;
    
};  
#endif
