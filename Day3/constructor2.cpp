#include <iostream> 
using namespace std;
class Student {
    public:
    String name;
    double *cgpa Ptr;
    Student(string name, double cgpa){
        this -> name =name;
        cgpa Ptr=new float;
        *cgpa ptr =cgpa;
    }
    Student (student &obj){
        this-> name =obj.name ;
        this -> cgpa = obj.cgpa;

    }
    void getInfo(){
        cout <<"name :"<< name <<endl;
        cout << "cgpa :"<<cgpa << endl;

    }
    }
