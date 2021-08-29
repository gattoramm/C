#include <iostream>
#include <string>

struct Student{
    int8_t age;
    int16_t group;
    std::string name;
};

void student_print(const Student &x);

int main()
{
    setlocale(LC_ALL, "Rus");
    Student vasya = {17, 649, "Вася"};
    Student masha = {18, 649, "Маша"};
    Student *p_student;
    p_student = &vasya;

    student_print(vasya);
    student_print(masha);
    student_print(*p_student);

    return 0;
}

void student_print(const Student &x)
{
    std::cout << x.name << " " << int(x.age) << " " << x.group << std::endl;
    //x->group++;
}
