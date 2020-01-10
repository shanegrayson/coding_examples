#include "ffxiv_header.h"

Helm::Helm()
{
    name = "empty";
    main_stat = 0;
    vitality = 0;
    critical_hit = 0;
    determination = 0;
    direct_hit = 0;
    tenacity = 0;
    skill_speed = 0;
    spell_speed = 0;
    piety = 0;
    materia_slot1 = none;
    materia_slot2 = none;
}

Helm::Helm(
    const std::string &n,
    const int ms, const int vit,
    const int ch, const int det, const int dh, const int ten,
    const int sks, const int sps, const int p,
    const materia mt1, const materia mt2
    )
{
    name = n;
    main_stat = ms;
    vitality = vit;

    if (mt1 == savage_aim && mt2 == savage_aim)
        critical_hit = ch + 120;
    else if (mt1 == savage_aim || mt2 == savage_aim)
        critical_hit = ch + 60;
    else
        critical_hit = ch;
    
    if (mt1 == savage_might && mt2 == savage_might)
        determination = det + 120;
    else if (mt1 == savage_might || mt2 == savage_might)
        determination = det + 60;
    else
        determination = det;

    if (mt1 == heavens_eye && mt2 == heavens_eye)
        direct_hit = dh + 120;
    else if (mt2 == heavens_eye || mt2 == heavens_eye)
        direct_hit = dh + 60;
    else
        direct_hit = dh;

    if (mt1 == battle_dance && mt2 == battle_dance)
        tenacity = ten + 120;
    else if (mt1 == battle_dance || mt2 == battle_dance)
        tenacity = ten + 60;
    else
        tenacity = ten;

    if (mt1 == quick_arm && mt2 == quick_arm)
        skill_speed = sks + 120;
    else if (mt1 == quick_arm || mt2 == quick_arm)
        skill_speed = sks + 60;
    else
        skill_speed = sks;

    if (mt1 == quick_tongue && mt2 == quick_tongue)
        spell_speed = sps + 120;
    else if (mt1 == quick_tongue || mt2 == quick_tongue)
        spell_speed = sps + 60;
    else
        spell_speed = sps;
    
    if (mt1 == piety_materia && mt2 == piety_materia)
        piety = p + 120;
    else if (mt1 == piety_materia || mt2 == piety_materia)
        piety = p + 60;
    else
        piety = p;

    materia_slot1 = mt1;
    materia_slot2 = mt2;
}

Helm::~Helm()
{
}

void Helm::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl;
    cout << "Main Stat: " << main_stat << endl;

    if (vitality != 0)
        cout << "Vitatlity: " << vitality << endl;
    if (critical_hit != 0) 
        cout << "Critical Hit: " << critical_hit << endl;
    if (determination != 0) 
        cout << "Determination: " << determination << endl;
    if (direct_hit != 0) 
        cout << "Direct Hit: " << direct_hit << endl;
    if (tenacity != 0) 
        cout << "Tenacity: " << tenacity << endl;
    if (skill_speed != 0)
        cout << "Skill Speed: " << skill_speed << endl;
    if (spell_speed != 0)
        cout << "Spell Speed: " << spell_speed << endl;
    if (piety != 0)
        cout << "Piety: " << piety << endl;
    if (materia_slot1 != none)
        cout << "Materia Slot 1: " << materia_slot1 << endl;
    if (materia_slot2 != none)
        cout << "Materia Slot 2: " << materia_slot2 << endl;

    cout << endl;
}

int max_stat(Helm &h)
{
    int max = 0;

    if (max < h.get_ch())
        max = h.get_ch();
    if (max < h.get_det())
        max = h.get_det();
    if (max < h.get_dh())
        max = h.get_dh();
    if (max < h.get_p())
        max = h.get_p();
    if (max < h.get_sks())
        max = h.get_sks();
    if (max < h.get_sps())
        max = h.get_sps();
    if (max < h.get_ten())
        max = h.get_ten();

    return max;
}

Helm Compare(Helm &h1, Helm &h2)
{
    if (h1.get_ms() > h2.get_ms())
        return h1;
    else if (h1.get_ms() < h2.get_ms())
        return h2;
    else if (h1.get_ch() > h2.get_ch())
        return h1;
    else if (h1.get_ch() < h2.get_ch())
        return h2;
    else
        return h1;
}