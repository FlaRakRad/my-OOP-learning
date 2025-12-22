#include <iostream>
#include <string>

class human {
public:
    int age{};
    int weight{};
    std::string name;
};

class point {
private:
    int x{};
    int y{};

protected:
    int z{};

public:
    // setters / getters
    int getX() const {
        return x;
    }

    void setX(int valueX) {
        x = valueX;
    }

    void setY(int valueY) {
        y = valueY;
    }

    void setZ(int valueZ) {
        z = valueZ;
    }

    // public print
    void print() const {
        std::cout << "x = " << x
                  << "\t y = " << y
                  << "\t z = " << z
                  << std::endl << std::endl;
    }
};

int main() {
    point a;
    a.setX(5);
    a.setY(10);
    a.setZ(15);

    a.print();
    return 0;
}
