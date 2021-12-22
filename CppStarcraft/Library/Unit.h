#pragma once
#include <iostream>
#include <string>
#include "FVector.h"

class Unit
{
protected:
    std::string Name;
    const float BaseHp = 50;
    const float BaseDamage = 10;
    float Hp = BaseHp;
    float Damage = BaseDamage;
    FVector2 Coord{0, 0};
    bool bIsDead = false;

public:
    Unit(): Name("BaseUnit")
    {
    };

    Unit(std::string _Name)
    {
        Name = _Name;
    }

    Unit(std::string _Name, FVector2 _Coord)
    {
        Name = _Name;
        Coord = _Coord;
    }

    virtual void Info()
    {
        std::cout << "Name : " << Name;
    }

    __forceinline std::string GetName() const {return Name;}
    __forceinline float GetDamage() const { return Damage; }

    virtual void Attack(Unit* Target, float _Damage);
    virtual void Attacked(Unit* Instigator, float _Damage);
    virtual void OnDamage(const float _Damage);

    virtual ~Unit()
    {
    }
};
