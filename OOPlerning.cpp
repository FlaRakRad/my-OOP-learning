#include <iostream>
#include <string>

class Human 
{
private:
    int age{};
    int weight{};
    std::string name;
public:
    Human(int valueAge,int valueWeight,std::string valueName)
    {
	age    = valueAge;
	weight = valueWeight;
	name   = valueName;
    }
    void print() const
    {
	std::cout << "age: " << age
		 << "\nweight: " << weight
		 << "\nname: "   << name
		 << std::endl;
    }
};

class Point 
{
private:
    int x{};
    int y{};

protected:
    int z{};

public:

    Point(int valueX,int valueY,int valueZ)
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
        std::cout << "x = "    << x
                  << "\t y = " << y
                  << "\t z = " << z
                  << std::endl << std::endl;
    }
};

int main() 
{
    Point a(5,44,20);

    a.print();

    Point b(10,15,20);

    b.print();


    Human first(20,60,"Alice");

    first.print();

    return 0;
};
