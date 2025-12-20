#include <iostream>
#include <string>
#include <random>

class human{

public:
	int age;
	int weight;
	std::string name;
	std::string swag;
	
	void print(){
		std::cout << "age: " << age 
                  << "\nweight: " << weight 
                  << "\nname: " << name << std::endl;
	}
};


int main(){
human firstHuman;

    int age;
    int weight;
    std::string name;
    
    std::cout << "insert your age: ";
    std::cin >> age;
    std::cout << "insert your weight: ";
    std::cin >> weight;
    std::cout << "insert your name: ";
    std::getline(std::cin >> std::ws, name);

	firstHuman.age = age;
	firstHuman.weight = weight;
	firstHuman.name = name;

	firstHuman.print();
	
	int swag;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist (0, 100);
	swag = dist(gen);
	std::cout << "your swag is: " << swag << "%"  << std::endl;
	
	return 0;
}
