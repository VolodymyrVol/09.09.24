#include <iostream>
using namespace std;

class Animal
{
protected:
	string sound;
	string name;
	string type;
public:
	virtual void Sound()
	{
		cout << "animal type isn`t selected" << endl;
	}
	virtual void Show()
	{
		cout << "animal type isn`t selected" << endl;
	}
	virtual void Type()
	{
		cout << "animal type isn`t selected" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog()
	{
		sound = "Bark!";
		name = "Graf";
		type = "Australian Shepherd";
	}
	void Sound()
	{
		cout << sound << endl;
	}
	void Show()
	{
		cout << "Dog name: " << name << endl;
	}
	void Type()
	{
		cout << "Type: " << type << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		sound = "Meow";
		name = "Snow";
		type = "American Wirehair";
	}
	void Sound()
	{
		cout << sound << endl;
	}
	void Show()
	{
		cout << "Cat name: " << name << endl;
	}
	void Type()
	{
		cout << "Type: " << type << endl;
	}
};

class Parrot : public Animal
{
public:
	Parrot()
	{
		sound = "screech!";
		name = "Rio";
		type = "Blue and Yellow Macaw";
	}
	void Sound()
	{
		cout << sound << endl;
	}
	void Show()
	{
		cout << "Parrot name: " << name << endl;
	}
	void Type()
	{
		cout << "Type: " << type << endl;
	}
};

class Hamster : public Animal
{
public:
	Hamster()
	{
		sound = "squeak";
		name = "Fluffy";
		type = "Chinese hamster";
	}
	void Sound()
	{
		cout << sound << endl;
	}
	void Show()
	{
		cout << "Hamster name: " << name << endl;
	}
	void Type()
	{
		cout << "Type: " << type << endl;
	}
};


int main()
{
	Animal** ptr = new Animal * [4];
	ptr[0] = new Dog();
	ptr[1] = new Cat();
	ptr[2] = new Parrot();
	ptr[3] = new Hamster();

	for (int i = 0; i < 4; i++)
	{
		ptr[i]->Sound();
		ptr[i]->Show();
		ptr[i]->Type();
		cout << endl;
	}
}