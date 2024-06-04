#include <vector>
#include <string>

enum class Terrain {
    Plain,
    River,
    Mountain
};

class Dino {
protected:
    int STR = 10, // сила 10 - 30
        DEX = 10, // ловкость 10 - 30
        INT = 10; // интеллект 10 - 30

    int HP = 100; // здоровье

    std::string name; // имя

    int cost = 0; // цена

    std::string dinoASCII;
public:
    Dino() {
    
    }

    ~Dino() {
    }

    void SetStrength( int strength ) {
        STR = strength;
    }

    void SetHealth(int health) {
        HP = health;
    }
   
    void SetDex(int dext) {
        DEX = dext;
    }
    void SetInt(int intell) {
        INT = intell;
    }
    void SetCost(int price) {
        cost = price;
    }
    void SetName(const std::string & newname) {
        name.clear();
        name = newname;
    }
    void SetASCII(const std::string& newascii) {
        dinoASCII.clear();
        dinoASCII = newascii;
    }

    int GetStrength( void ) {
        return STR;
    }

    int GetDex( void ) {
        return DEX;
    }
    int GetInt( void ) {
        return INT;
    }
    int GetCost( void ) {
        return cost;
    }

    int GetHealth(void) {
        return HP;
    }

    std::string GetName( void ) {
        return name;
    }
    std::string GetASCII( void ) {
        return dinoASCII;
    }

    virtual int damage(Terrain terrain) = 0;
};

class DinoStr : public Dino {
public:
    DinoStr() {
    }

    DinoStr(int Strength, int Dexterity, int Intelligence, int HealthPoints, int Price, std::string N, std::string ascii_symbols) {
        this->STR = Strength;
        this->DEX = Dexterity;
        this->INT = Intelligence;
        this->HP = HealthPoints;
        this->cost = Price;
        this->name = N;
        this->dinoASCII = ascii_symbols;
    }

    int damage(Terrain terrain) {
        return terrain == Terrain::Plain ?
            2 * STR :
            terrain == Terrain::River ?
            DEX :
            INT;
    }
};

class DinoDex : public Dino {
public:
    DinoDex() {
    }

    DinoDex(int Strength, int Dexterity, int Intelligence, int HealthPoints, int Price, std::string N, std::string ascii_symbols) {
        this->STR = Strength;
        this->DEX = Dexterity;
        this->INT = Intelligence;
        this->HP = HealthPoints;
        this->cost = Price;
        this->name = N;
        this->dinoASCII = ascii_symbols;
    }

    int damage(Terrain terrain) {
        return terrain == Terrain::Plain ?
            STR :
            terrain == Terrain::River ?
            2 * DEX :
            INT;
    }
};
class DinoInt : public Dino {
public:
    DinoInt() {
    }

    DinoInt(int Strength, int Dexterity, int Intelligence, int HealthPoints, int Price, std::string N, std::string ascii_symbols) {
        this->STR = Strength;
        this->DEX = Dexterity;
        this->INT = Intelligence;
        this->HP = HealthPoints;
        this->cost = Price;
        this->name = N;
        this->dinoASCII = ascii_symbols;
    }

    int damage(Terrain terrain) {
        return terrain == Terrain::Plain ?
            STR :
            terrain == Terrain::River ?
            DEX :
            2 * INT;
    }
};