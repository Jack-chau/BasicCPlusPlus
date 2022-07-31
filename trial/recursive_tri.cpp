#include<iostream>
#include<windows.h>


void draw_tree(int base, int tree_section)
{
    int scale = base * tree_section;
    int middle;
    if(scale%2 ==0)
    {
        middle = (scale+1) /2;
    }else
    {
        middle = scale /2 +1;
    }
    int star_left=middle;
    int star_right=middle;
    




    




}
int main()
{
    draw_tree(6,0);
    return 0;
}