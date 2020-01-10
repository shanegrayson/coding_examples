#ifndef FFXIV_HEADER_H_
#define FFXIV_HEADER_H_
#include <iostream>
#include <fstream>
#include <string>

enum materia
{
    none,
    savage_aim ,
    savage_might,
    heavens_eye,
    quick_arm,
    quick_tongue,
    battle_dance,
    piety_materia
};

class Helm
{
private:
    std::string name;
    int main_stat;
    int vitality;
    int critical_hit;
    int determination;
    int direct_hit;
    int piety;
    int tenacity;
    int skill_speed;
    int spell_speed;
    materia materia_slot1;
    materia materia_slot2;

public:
    /* CONSTRUCTORS */
    Helm();
    Helm(const std::string &n, 
    const int ms, const int vit,
    const int ch, const int det, const int dh, const int ten,
    const int sks, const int sps, const int p,
    const materia mt1, const materia mt2
    );
    ~Helm();

    /* GETTERS */
    std::string get_nm() { return name; }
    int get_ms()  { return main_stat; }
    int get_vit() { return vitality; }
    int get_ch()  { return critical_hit; }
    int get_det() { return determination; }
    int get_dh()  { return direct_hit; }
    int get_p()   { return piety; }
    int get_ten() { return tenacity; }
    int get_sks() { return skill_speed; }
    int get_sps() { return spell_speed; }
    materia get_mt1() { return materia_slot1; }
    materia get_mt2() { return materia_slot2; }

    /* SETTERS */

    /* MEMBER FUNCTIONS */
    void Show() const;
};

Helm Compare(Helm &h1, Helm &h2);
int max_stat(Helm &h);

#endif
