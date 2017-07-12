#include "heroes.h"
#include <QTime>
#include <QMap>

Heroes::Heroes()
{
    hero_name = hero_name_map[qrand() % 5];
    hero_race = hero_race_map[qrand() % 5];
    hero_class = hero_class_map[qrand() % 5];
    hero_ideology = hero_ideology_map[qrand() % 5];
    attac = hero_base_attac[hero_race]; //сделать функцию, которая в зависимости от расы и класса генерит параметры
    defend = hero_base_attac[hero_race];
}

QMap<int, QString> hero_name_map = {
    (0, "AAA"),
    (1, "BBB"),
    (2, "CCC"),
    (3, "DDD"),
    (4, "EEE")
};

QMap<int, QString> hero_class_map = {
    (0, "AAA"),
    (1, "BBB"),
    (2, "CCC"),
    (3, "DDD"),
    (4, "EEE")
};

QMap<int, QString> hero_race_map = {
    (0, "AAA"),
    (1, "BBB"),
    (2, "CCC"),
    (3, "DDD"),
    (4, "EEE")
};

QMap<int, QString> hero_ideology_map = {
    (0, "AAA"),
    (1, "BBB"),
    (2, "CCC"),
    (3, "DDD"),
    (4, "EEE")
};

QMap<QString, int> hero_base_attac = {
    ("AAA", 0),
    ("BBB", 1),
    ("CCC", 2),
    ("DDD", 3),
    ("EEE", 4)
};

QMap<QString, int> hero_base_defend = {
    ("AAA", 0),
    ("BBB", 1),
    ("CCC", 2),
    ("DDD", 3),
    ("EEE", 4)
};
