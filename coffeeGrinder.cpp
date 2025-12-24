#include <iostream>
#include <string>

class CoffeeGrinder
{
private:

	bool checkVoltage()
	{
		return true; //if true, will go to line 17 and start work, if false, will go to line 21 an stop
	}
public:
	void start()
	{
		bool voltageIsNormal = checkVoltage(); //watches if bool inside private is true or false and give answer
		if(voltageIsNormal) 
		{
			std::cout << "Started " << std::endl;
		}
		else
		{
			std::cout << "Something is wrong! " << std::endl;
		}
		
	}
};

int main()
{
	CoffeeGrinder a;
	a.start(); //going to 'void start in class "CoffeeGrinder" inside public modificator

	return 0;
};
