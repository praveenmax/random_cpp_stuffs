#include <iostream>
#include "student_lib.h"

Student create_student_details(int id, char grade_code, std::string name, bool is_fees_paid, int total_marks_count, int* array_marks)
{
    Student temp;
    temp.id = id;
    temp.grade_code = grade_code;
    temp.name = name;
    temp.is_fees_paid = is_fees_paid;
    temp.total_marks_count = total_marks_count;
    temp.array_marks = array_marks;

    return temp;
}

void print_student_details(const Student& s)
{
    std::cout << "ID          : " << s.id << std::endl;
    std::cout << "Grade Code  : " << s.grade_code << std::endl;
    std::cout << "Name        : " << s.name << std::endl;
    std::cout << "Fees Paid?  : " << (s.is_fees_paid ? "Yes" : "No") << std::endl;
    std::cout << "Marks Count : " << s.total_marks_count << std::endl;
    std::cout << "Marks       : ";

    for(int i=0;i<s.total_marks_count;i++)
    {
        std::cout << s.array_marks[i] << " | ";
    }

    std::cout << std::endl;
}

//Assigning member variables via initializer list
Student_v2::Student_v2(int id, 
            char grade_code, 
            std::string name, 
            bool is_fees_paid, 
            int total_marks_count,
            int *array_marks)
    :   id(id), 
        grade_code(grade_code), 
        name(name), 
        is_fees_paid(is_fees_paid), 
        total_marks_count(total_marks_count), 
        array_marks(array_marks)
{

}

void Student_v2::print_student_details() const{
    std::cout << std::endl << "Student_v2 Details :" <<std::endl;

    std::cout << "ID          : " << id << std::endl;
    std::cout << "Grade Code  : " << grade_code << std::endl;
    std::cout << "Name        : " << name << std::endl;
    std::cout << "Fees Paid?  : " << (is_fees_paid ? "Yes" : "No") << std::endl;
    std::cout << "Marks Count : " << total_marks_count << std::endl;
    std::cout << "Marks       : ";

    for(int i=0;i<total_marks_count;i++)
    {
        std::cout << array_marks[i] << " | ";
    }

    std::cout << std::endl;
}

