#include <iostream>
#include <string>

//TASK_1
//������� ����� Person(�������) � ������ : ���, �������, ��� � ���.
//���������� ������ �������������� �����, ��������� �������� � ����.
// 
//������� ����������� ����� Student(�������), ������� ���� ���� ��������.
//���������� ������ �������������� � ���������� ����� ��������.
//������� ������� ���������� ��������� ���������.
//� ������� main() ������� ���������(�� ������ ���) ���������.
//������� ���������� � ���.

class Person {
private:
	std::string name;
	int age;
	char gender;
	float weight;
public:
	void SetMetod(std::string names, int ages, float mass){
		name = names;
		age = ages;
		weight = mass;
	}

	void show() {
		std::cout << "Name: " << name << " Age: " << age << " Weight: " << weight;
	}
};
class Student : public Person {
private:
	int year�ourse;
	int canter = 1;
public:
	void SetHuman() {
		std::cout << "Canter: " << canter++ << std::endl;
	};

		 
	void setYearCourse(int years) {
		year�ourse = years;
	}

	void showCourse() {
		std::cout << " Course: " << year�ourse << std::endl;
	}
	
};


//TASK_2
//������� ������ Apple(������) � Banana(�����), ������� ��������� ����� Fruit(�����).
//� Fruit ���� ��� ���������� - �����: name(���) � color(����).
//�������� ����� ����� GrannySmith, ������� ��������� ����� Apple.

class Fruit {
protected:
	std::string name;
	std::string color;
public:
	
	std::string getName()
	{
		return name;
	}

	std::string getColor()
	{
		
		return color;
	}
	
};

class Apple: public Fruit {
private:
public:
	Apple(std::string colors) {
		color = colors;
	};
	
	std::string getName() {
		name = "Apple";
		return name;
	}

	
};

class Banana: public Fruit {
private:
public:
	std::string getName() {
		name = "Banana";
		return name;
	}

	std::string getColor() {
		color = "yellow";
		return color;
	}
};

class GrannySmith: public Apple::Fruit {
private:
public:
	std::string getName()
	{
		name = "Granny Smith apple";
		return name;
	}

	std::string getColor() {
		name = "green";
		return name;
	}
	
};


//TASK_3
// ������� ������� ���� � Blackjack. 
// ��������, ��� �������� ������ ���� �� �++, ��������� ��������-��������������� ����������������. 
// ������� ����� ������� � ���������? ����� ������ ����� ��������, � ����� ������������? 
// ��������� ���������� ���� � ������� ������� � �������� ���������� 
// � ���� ����������� � �������� ����� ��������� ������.

//class / c������� �����
//class / ������� �����
//class / ������
//class / �����


int main()
{
	Student persons;
	persons.SetMetod("Igor", 30, 90);
	persons.setYearCourse(1);
	persons.SetHuman();
	persons.show();
	persons.showCourse();


	persons.SetMetod("Julia", 25, 60);
	persons.setYearCourse(5);
	persons.SetHuman();
	persons.show();
	persons.showCourse();

	persons.SetMetod("Elena", 36, 105);
	persons.setYearCourse(3);
	persons.SetHuman();
	persons.show();
	persons.showCourse();
	
	{
		Apple a("red");
		Banana b;
		GrannySmith c;

		std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
		std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
		std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

		return 0;
	}




}


