#ifndef student_h
#define student_h
#include <string>
using namespace std;

class Student{
    public:
        //default constructor
        Student();
        //parametrized constructor
        Student(string name);
        Student(string name, int roll_no);
        //destructor
        virtual ~Student();
        Student& operator=(const Student& other);

        //getter setter
        string get_name();
        int get_rollNo();

        void set_name(string name);
        void set_rollNo(int rollNo);

        //printing the info
        void print_info();

        //variables
        private:
            string name;
            int rollNo;


};
#endif // student_h

