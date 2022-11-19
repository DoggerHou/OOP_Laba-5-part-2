#include <iostream>

using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal()\n";
	}
	virtual ~Animal() {
		cout << "~Animal()\n";
	}
	virtual void sound() {
		cout << "Animal sound\n";
	}
};

class Dog :public Animal {
	Dog() {
		cout << "Dog()\n";
	}
	~Dog() {
		cout << "~Dog()\n";
	}
	void sound() override {
		cout << "Dod sound\n";
	}
};

class Cat :public Animal {
	Cat() {
		cout << "Cat()\n";
	}
	~Cat() {
		cout << "~Cat()\n";
	}
	void sound() override {
		cout << "Cat sound\n";
	}
};

int main()
{

}
