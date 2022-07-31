#include<iostream>
class Position
{
    public:
    int x = 10;
    int y = 20;
   
    Position operator + (Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }
    bool operator == (Position pos)
    {
        if (x == pos.x && y == pos.y)
        {
        return true;
        }
        else
        {
            return false;
        }
    }
};
int main ()
{
    Position pos1, pos2;
    pos2.x =20;
    Position pos3 = pos1 + pos2;
    if (pos1.x == pos2.x)
    {
        std::cout<<"They are the same\n";
    }
    else
    {
        std::cout<<"the result shows above\n";
    }
    std::cout<<pos3.x<<" "<<pos3.y<<std::endl;
    return 0;
}