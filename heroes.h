#ifndef HEROES_H
#define HEROES_H
#include <QString>

class Heroes
{
public:
    Heroes();
    QList<QString>* getHeroNameList();
    QList<QString>* getHeroRaceList();
    QList<QString>* getHeroClassList();
    QList<QString>* getHeroIdeologyList();

private:
    QString hero_name;
    QString hero_race;
    QString hero_class;
    QString hero_ideology;
    int attac;
    int defend;
};

#endif // HEROES_H
