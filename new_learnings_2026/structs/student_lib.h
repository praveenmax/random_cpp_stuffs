#pragma once

#include <string>

//This is named struct
struct Student
{
    int id;
    char grade_code;
    std::string name;
    bool is_fees_paid;
    int total_marks_count;
    int *array_marks;
};

Student create_student_details(int id, 
                                char grade_code, 
                                std::string name, 
                                bool is_fees_paid, 
                                int total_marks_count,
                                int *array_marks);

void print_student_details(const Student &s);

/////////////////////////////////////////////////////////////////////////

//In this, we add the functions inside the struct itself.
struct Student_v2{

    int id;
    char grade_code;
    std::string name;
    bool is_fees_paid;
    int total_marks_count;
    int* array_marks;

    Student_v2(int id, 
            char grade_code, 
            std::string name, 
            bool is_fees_paid, 
            int total_marks_count,
            int *array_marks);
    
    void print_student_details() const;

};
