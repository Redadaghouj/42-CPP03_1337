#include <iostream>

class Person
{
	public:
		std::string name;
		Person() {}
		Person(std::string name) : name(name) {}
};

class Student : public Person
{
	public :
		Student() {}
		Student(std::string name) : Person(name)
		{
		}
};

class Worker : public Person
{
	public :
		Worker(std::string name) : Person(name)
		{
		}
};

class Intern : public Student, public Worker
{
	public :
		Intern(std::string name) : Worker(name)
		{
		}
};

int main()
{
	Intern in("Reda");
	std::cout << in.Worker::name << std::endl;
	std::cout << in.Student::name << std::endl;
	return 0;
}
