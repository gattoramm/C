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

    Student *p_student = new Student[10];

    for (int k = 0; k < 10; k++)
    {
        p_student[k].age = 17;
        p_student[k].group = 600 + k;
        p_student[k].name = "Вася";
    }

    for (int k = 0; k < 10; k++)
        student_print(p_student[k]);

    return 0;
}

void student_print(const Student &x)
{
    std::cout << x.name << " " << int(x.age) << " " << x.group << std::endl;
    //x->group++;
}
