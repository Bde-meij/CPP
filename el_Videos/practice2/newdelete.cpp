#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

class Student
{
	public:
		Student()
		{
			std::cout << "Student " << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << " ded" << std::endl;
		}
};

int main()
{
	int i = 0;
	// std::vector<Student *> veccie(3);
	// while (i < 3)
	// {
	// 	veccie[i] = new Student;
	// 	i++;
	// }
	// delete veccie[1];
	// veccie[1] = new Student;
	Student *fgh = new Student[3];
	fgh[1] = new Student;
	system("leaks -q a.out");
}

// new returns one or more[] instances of given object.
// when called any existing arrays will be overwritten.

// template <typename T>
// class automatic_pointer {
// public:
//     automatic_pointer(T* pointer) : pointer(pointer) {}

//     // destructor: gets called upon cleanup
//     // in this case, we want to use delete
//     ~automatic_pointer() { delete pointer; }

//     // emulate pointers!
//     // with this we can write *p
//     T& operator*() const { return *pointer; }
//     // and with this we can write p->f()
//     T* operator->() const { return pointer; }

// private:
//     T* pointer;

//     // for this example, I'll just forbid copies
//     // a smarter class could deal with this some other way
//     automatic_pointer(automatic_pointer const&);
//     automatic_pointer& operator=(automatic_pointer const&);
// };

// automatic_pointer<A> a(new A()); // acts like a pointer, but deletes automatically
// automatic_pointer<B> b(new B()); // acts like a pointer, but deletes automatically