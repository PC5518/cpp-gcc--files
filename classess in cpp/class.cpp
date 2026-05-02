#include <iostream>
class student {
public:
    std::string name;
    int roll_number;
    std::string father_name;
    int age ;
    int maths;
    int physics;
    void highest() {
        if (maths> physics)  {
            std::cout <<name  << " Highest number is in maths: " <<maths  <<std::endl;

        } else  {
            std::cout<< name<< " Highest number is physics " << physics << std::endl;
        }
    }


};
int main() {
    student first_student;
    first_student.name= "Deepak Singh";
    first_student.age=47;
    first_student.maths=36;
    first_student.roll_number=1979;
    first_student.physics=78;
    first_student.highest();
    
    student second_student;
    second_student.name="Aditya N. Singh";
    second_student.age= 17;
    second_student.roll_number=2008;
    second_student.maths= 98;
    second_student.physics=95;
    second_student.highest();
}