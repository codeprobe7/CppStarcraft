#pragma once
#include "Library/AMarine.h"

int main(int argc, char* argv[])
{
    AMarine Marine1("lkjadf", FVector2(1,2));
    AMarine Marine2("Marine");
    Marine1.Info();
    Marine2.Info();

    Marine1.Attack(&Marine2, Marine1.GetDamage());

    Marine1.Info();
    Marine2.Info();
    return 0;
}
