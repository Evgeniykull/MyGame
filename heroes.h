#ifndef HEROES_H
#define HEROES_H
#include <QString>

class Heroes
{
public:
    Heroes();

    QString hero_name;
    QString hero_race;
    QString hero_class;
    QString hero_ideology;
    int attac;
    int defend;

private:
    QList<QString> getHeroNameList();
    QList<QString> getHeroRaceList();
    QList<QString> getHeroClassList();
    QList<QString> getHeroIdeologyList();

    int generateRandomNum(int max);

};

#endif // HEROES_H
