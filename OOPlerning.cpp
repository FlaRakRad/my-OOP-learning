#include <iostream>
#include <string>

class Human 
{
private:
    int age{};
    int weight{};
    std::string name;
public:

    Human()
    {
	age    = 0;
	weight = 0;
	name   = "N/A";
    }


    Human(int valueAge,int valueWeight,std::string valueName)
    {
	age    = valueAge;
	weight = valueWeight;
	name   = valueName;
    }



    int getAge() const
    {
	return age;
    }
    void setAge(int valueAge)
    {
	age = valueAge;
    }



    // getters / setters
    int getWeight() const 
    {
	return weight;
    }
    void setWeight(int valueWeight)
    {
	weight = valueWeight;
    }



    std::string getName() const
    {
	return name;
    }
    void setName(std::string valueName)
    {
	name = valueName;
    }



    void print() const
    {
	std::cout << "age: "      << age
		     << "\nweight: " << weight
		     << "\nname: "   << name
		     << std::endl    << std::endl;
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

Point()
    {
	x = 0;
	y = 0;
	z = 0;
    }

Point(int valueX,int valueY,int valueZ)
    {
	x = valueX;
	y = valueY;
	z = valueZ;
    }



    // getters / setters
    int getX() const 
    {
        return x;
    }
    void setX(int valueX) 
    {
        x = valueX;
    }



    int  getY() const
    {
	return y;
    }
    void setY(int valueY) 
    {
        y = valueY;
    }



    int getZ() const
    {
	return z;
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
    Point a;

    a.print();


    Point b(5,14,8);

    b.print();


    Human first(20,60,"Alice");

    first.print();

    Human second(15,35,"Jeffrey");

    second.print();

    
    Human third;

    third.print();

    return 0;
};
