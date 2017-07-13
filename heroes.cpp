#include "heroes.h"
#include <QTime>
#include <QMap>
#include <QList>


QList<QString> Heroes::getHeroNameList() {
    QList<QString> hero_name_list;
    hero_name_list.append("Alexey");
    hero_name_list.append("Robert");
    hero_name_list.append("Ionna");
    hero_name_list.append("Malla");
    return hero_name_list;
}

QList<QString> Heroes::getHeroRaceList() {
    QList<QString> hero_race_list;
    hero_race_list.append("Human");
    hero_race_list.append("Elves");
    hero_race_list.append("Dworfs");
    hero_race_list.append("Orcs");
    return hero_race_list;
}

QList<QString> Heroes::getHeroClassList() {
    QList<QString> hero_class_list;
    hero_class_list.append("Meel");
    hero_class_list.append("Archer");
    hero_class_list.append("Assasin");
    hero_class_list.append("Mage");
    hero_class_list.append("Priest");
    return hero_class_list;
}

QList<QString> Heroes::getHeroIdeologyList() {
    QList<QString> hero_ideology_list;
    hero_ideology_list.append("Only good");
    hero_ideology_list.append("Good");
    hero_ideology_list.append("Evil");
    hero_ideology_list.append("Only evil");
    return hero_ideology_list;
}

int Heroes::generateRandomNum(int max) {
    return qrand() % max;
}

Heroes::Heroes()
{
    QList<QString> hero_name_list = getHeroNameList();
    QList<QString> hero_race_list = getHeroRaceList();
    QList<QString> hero_class_list = getHeroClassList();
    QList<QString> hero_ideology_list = getHeroIdeologyList();

    hero_name = hero_name_list.at(generateRandomNum(hero_name_list.length()));
    hero_race = hero_race_list.at(generateRandomNum(hero_race_list.length()));
    hero_class = hero_class_list.at(generateRandomNum(hero_class_list.length()));
    hero_ideology = hero_ideology_list.at(generateRandomNum(hero_ideology_list.length()));

    //attac = hero_base_attac[hero_race]; //сделать функцию, которая в зависимости от расы и класса генерит параметры
    //defend = hero_base_attac[hero_race];
}
