#pragma once

struct FVector2
{
    int X;
    int Y;

    FVector2()
    {
        X = 0;
        Y = 0;
    }

    FVector2(int _X, int _Y)
    {
        X = _X;
        Y = _Y;
    }

    bool operator==(const FVector2 Equal) const
    {
        return X == Equal.X && Y == Equal.Y;
    }

    FVector2 operator+(const FVector2 Add) const
    {
        FVector2 Self;
        Self.X = X + Add.X;
        Self.Y = Y + Add.Y;
        return Self;
    }
    
    friend std::ostream& operator<<(std::ostream& os,const FVector2& Vector2)
    {
        os << "("<<Vector2.X << ", " << Vector2.Y << ")";
        return os;
    }
};


struct FVector3
{
    int X;
    int Y;
    int Z;
};