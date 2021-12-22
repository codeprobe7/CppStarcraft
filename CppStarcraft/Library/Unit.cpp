#include "Unit.h"

void Unit::Info()
{
    std::cout << "Name : " << Name << "  Hp : " << Hp << "  Coord : " << Coord << std::endl;
}

void Unit::Attack(Unit* Target, float _Damage)
{
    if (Target)
    {
        Target->Attacked(this, Damage);
    }
}

void Unit::Attacked(Unit* Instigator, float _Damage)
{
    if (Instigator)
    {
        std::cout << Name << " Attacked by " << Instigator->GetName() << " " << _Damage << " Damage." << std::endl;

        OnDamage(_Damage);
    }
}

void Unit::OnDamage(const float _Damage)
{
    Hp -= Damage;
}
