#include <iostream>
#include <string>

class Personality
{
private:
	int age;
	int weight;
	int postID;
	std::string name;
	std::string surname;
public:
	Personality()
	{
	age     = -1;
	weight  = -1;
	postID  = -1;
	name    = "N/A";
	surname = "N/A";
	}

	
	Personality(int valueAge,int valueWeight,int valuePostID,std::string valueName,std::string valueSurname)
	{
	age     = valueAge;
	weight  = valueWeight;
	postID  = valuePostID;
	name    = valueName;
	surname = valueSurname;
	}

	int getAge() const
	{
		return age;
	}
	void setAge(int valueAge)
	{
		if (valueAge >= 0 && valueAge <= 150)
			age = valueAge;
		else
			age = -1;
	}


	int getWeight() const
	{
		return weight;
	}
	void setWeight(int valueWeight)
	{
		if (valueWeight >= 0 && valueWeight <= 150)
			weight = valueWeight;
		else
			weight = -1;
	}

	int getPostID() const
	{
		return postID;
	}
	void setPostID(int valuePostID)
	{
		if (valuePostID >= 100000 && valuePostID <= 999999)
			postID = valuePostID;
		else
			postID = -1;
	}

	std::string getName() const
	{
		return name;
	}
	void setName(std::string valueName)
	{
		name = valueName;
	}

	std::string getSurname() const
	{
		return surname;
	}
	void setSurname(std::string valueSurname)
	{
		surname = valueSurname;
	}


	void print() const
	{
		std::cout << "Age: "       << age
				 << "\nWeight: "  << weight
				 << "\nPostID: "  << postID
				 << "\nName: "    << name
				 << "\nSurname: " << surname
				 << std::endl     << std::endl;
	}

};

class Position
{
private:
	int x;
	int y;
	int z;
public:
	

};

class Human
{


};


int main()
{
    int age;
    int weight;
    int postID;
    std::string name;
    std::string surname;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter weight: ";
    std::cin >> weight;

    std::cout << "Enter postID: ";
    std::cin >> postID;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter surname: ";
    std::cin >> surname;

    Personality first(age, weight, postID, name, surname);    
    first.setAge(age);
    first.setWeight(weight);
    first.setPostID(postID);
    first.setName(name);
    first.setSurname(surname);

    first.print();

    return 0;
};
