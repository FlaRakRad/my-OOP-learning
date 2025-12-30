#include <iostream>
#include <stringr>

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
	age     = 0;
	weight  = 0;
	postID  = "N/A";
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
		age = valueAge;
	}


	int getWeight() const
	{
		return weight;
	}
	void setWeight(int valueWeight)
	{
		weight = valueWeight;
	}

	int getPostID() const
	{
		return postID;
	}
	void setPostID(int valuePostID)
	{
		postID = valuePostID;
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
		std::cout << "Age: "     << age;
				  << "Weight: "  << weight;
			 	  << "PostID: "  << PostID;
				  << "Name: "    << name;
				  << "Surname: " << surname;
				  << std::endl   << std::endl;
	}

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

};
