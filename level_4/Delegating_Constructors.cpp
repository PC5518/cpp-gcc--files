#include <iostream>
// class person {
// public:
//     int age;
//     int sevis_id;
//     person() {
//         age =18;
//         sevis_id=100;
        
//     }
//     person(int a) {
//         age =a;
//         sevis_id=100;

//     }
// };
// in software engineering this repitetion is very bad.

class person {
public:
    int age;
    int sevis_id;
    person(int a,int s )  {
        age =a ;
        sevis_id=s;
    } 
    // ok toh mai bol rha hun ki jab use de command person()  tab upar wale constructor ko call kar dena. itni value de ke 
    person(): person(18,256) {

    }
};

int main() {

}