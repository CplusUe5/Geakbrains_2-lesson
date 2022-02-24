#include <iostream>
#include <string>

//TASK_1
//Создать класс Person(человек) с полями : имя, возраст, пол и вес.
//Определить методы переназначения имени, изменения возраста и веса.
// 
//Создать производный класс Student(студент), имеющий поле года обучения.
//Определить методы переназначения и увеличения этого значения.
//Создать счетчик количества созданных студентов.
//В функции main() создать несколько(не больше трёх) студентов.
//Вывести информацию о них.

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
	int yearСourse;
	int canter = 1;
public:
	void SetHuman() {
		std::cout << "Canter: " << canter++ << std::endl;
	};

		 
	void setYearCourse(int years) {
		yearСourse = years;
	}

	void showCourse() {
		std::cout << " Course: " << yearСourse << std::endl;
	}
	
};


//TASK_2
//Создать классы Apple(яблоко) и Banana(банан), которые наследуют класс Fruit(фрукт).
//У Fruit есть две переменные - члена: name(имя) и color(цвет).
//Добавить новый класс GrannySmith, который наследует класс Apple.

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
// Изучить правила игры в Blackjack. 
// Подумать, как написать данную игру на С++, используя объектно-ориентированное программирование. 
// Сколько будет классов в программе? Какие классы будут базовыми, а какие производными? 
// Продумать реализацию игры с помощью классов и записать результаты 
// в виде комментария в основном файле сдаваемой работы.

//class / cруктура карта
//class / колеция колод
//class / диллер
//class / игрок


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


