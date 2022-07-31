#include<iostream>
#include<string>

class Position
{
    public:
    int x = 10;
    int y = 20;   

    Position operator + (Position pos2)
    {
        Position new_pos;
        new_pos.x = x + pos2.x;
        new_pos.y = y + pos2.y;
        return new_pos;
    }
    bool operator == (Position pos2)
    {
        if (x == pos2.x && y == pos2.y)
        {
            return true;
        }else
        {
            return false;
        }
    }
    friend std::ostream& operator <<(std::ostream& output, Position pos);
    friend std::istream& operator >>  (std::istream& input, Position &pos);
};

std::istream& operator >>  (std::istream& input, Position &pos)
{
    input>>pos.x>>pos.y;
    return input;
}

std::ostream& operator << (std::ostream& output, Position pos)
{
    output<<"pos1.x ="<< pos.x << "pos1.y" << pos.y<<std::endl;
    return output;
}


int main ()
{
    Position pos1, pos2;
    std::cout<<"pos1.x: ";
    std::cin>>pos1.x;
    std::cout<<"pos1.y: ";
    std::cin>>pos1.y;
    std::cout<<"pos2.x: ";
    std::cin>>pos2.x;
    std::cout<<"pos2.y: ";
    std::cin>>pos2.y;
    std::cout<<pos1.x<<pos1.y;
    std::cout<<pos2.x<<pos2.y;
    return 0;
}
