#include <iostream>
class student {
public:
    std::string name;
    int roll_number;
    std::string father_name;
    int age ;
    int maths;
    int physics;
    void highest(void) {
        if (maths> physics)  {
            std::cout <<name  << " Highest number is " <<maths  <<std::endl;

        } else  {
            std::cout<< name<< " Highest number is " << physics << std::endl;
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
    highest();

}