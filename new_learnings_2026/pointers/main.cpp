#include <iostream>
#include "../structs/student_lib.h"

int main(){
    /*
    int array_score[] = {20,30,40};
    Student_v2 s1(200, 'D', "Ryu", true,2,array_score);
    s1.print_student_details();

    Student_v2* ptr_s1 = &s1;
    ptr_s1->name = "Pointer Ryu !!!";
    std::cout << ptr_s1->name;

    Student_v2& ptr_s1 = s1;
    ptr_s1->name = "Pointer Ryu !!!";
    std::cout << ptr_s1->name;
    */

    //ptr_s1->print_student_details(); 

    int amount = 1000;
    int amount_2 = 2000;

    std::cout << std::endl << "amount addr : "<< &amount;

    int& ref_amount = amount;
    std::cout << std::endl << "Ref addr  : "<< &ref_amount;
    std::cout << std::endl << "Ref value : "<< ref_amount;
    ref_amount = 400404;

    std::cout << std::endl << "Ref addr  : "<< &ref_amount;
    std::cout << std::endl << "Ref value : "<< ref_amount;
    std::cout << std::endl << "amount val : "<< amount;

    std::cout << std::endl << "Ptr based : " << std::endl;

    int* ptr_amount = &amount;
    std::cout << std::endl << "Ptr addr  : "<< &ptr_amount;
    std::cout << std::endl << "Ptr value : "<< *ptr_amount;

    std::cout << std::endl;
    return 0;
}