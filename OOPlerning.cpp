#include <iostream>
#include <string>

class Human 
{
public:
    int age{};
    int weight{};
    std::string name;
};

class Point
{
private:
    int x{};
    int y{};

protected:
    int z{};

public:
    Point(int valueX,int valueY,int valueZ) // constructor
    {
        x = valueX;
        y = valueY;
        z = valueZ;    
    }
    // setters / getters
    int getX() const 
    {
        return x;
    }

    void setX(int valueX) 
    {
        x = valueX;
    }

    void setY(int valueY) 
    {
        y = valueY;
    }

    void setZ(int valueZ) 
    {
        z = valueZ;
    }

    // public print
    void print() const 
    {
        std::cout << "x = " << x
                  << "\t y = " << y
                  << "\t z = " << z
                  << std::endl << std::endl;
    }
};

int main() 
{
    Point a(10,15,20); //values x;y;z to object a
    a.print();

    Point b(1,2,3); //values x;y;z to object b
    b.print();
    
    return 0;
}
