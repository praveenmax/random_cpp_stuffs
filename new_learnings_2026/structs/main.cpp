#include <iostream>
#include "student_lib.h"

int main()
{
    int marks[] = {100, 90, 70, 60};

    Student s1 = create_student_details(
        101,
        'A',
        "Praveen",
        true,
        sizeof(marks)/sizeof(marks[0]),
        marks);

    print_student_details(s1);

    // Student_v2 approach
    Student_v2 s2(
        102,
        'A',
        "Max",
        true,
        sizeof(marks)/sizeof(marks[0]),
        marks);

    s2.print_student_details();

    //Reference based modification 
    std::cout << "\nReference based access and modification : ";
    std::cout << "\n------------------------------------------";

    std::cout << "\nBefore modification : ";
    Student_v2& s2_1 = s2;
    s2_1.print_student_details();

    std::cout << "\nAfter modification : ";
    s2_1.name = "Max Ryu !!!!!";
    s2_1.print_student_details();

    return 0;
}
