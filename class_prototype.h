using namespace std;
class Planet
{
    public :
      void  set_name(string);
      string get_name();

       void set_m_distance(double);
       double get_m_distance();

       void set_m_radius(double);
       double get_m_radius();

       void set_m_massa(double);
       double get_m_massa();

       double gravitation();

    public:
        
        


    private:
        string m_name;
        double m_distance;
        double m_radius;
        double m_massa;
        double m_g {9.8};

};


class Student
{
    public:

        void set_name( char*);
        char* get_name();

        void set_surname(char*);
        char* get_surname();
    


    private:
        char* m_point_name = new char[20];
        char* m_point_surname = new char[40];
};


class Employee
{
    public:
    Employee(string,int,int,string);
    
    void print_info();

    private:
        string m_name;
        int m_year;
        int m_sallary;
        string m_address;
};


class Circle
{
    public:
        Circle(double);
        void get_area();
        void get_circumferenc();

    private:
        const double m_pi {3.14};
        double m_radius;
        double m_circumferenc;
        double m_area;

};


class Triangle
{
    public:
        
        double get_area();
        double get_perimetr();

    private:
        double m_a {3};
        double m_b {4};
        double m_c{5};

};


class Complex
{
    public:
        Complex(){};
        Complex(int,int);
        void sum(const Complex&,const Complex&);
        void mul(const Complex&,const Complex&);
        void sub(const Complex&,const Complex&);
    private:    
        double m_real;
        double m_imag;
};


class Fib
{
    public:
        int generator(int);
    private:
        int m_x {0};
        int m_y {1};
        int m_z = m_x + m_y;
};

class Vertex
{
    public:
        void print();
    private:
        struct point{
            int m_x;
            int m_y;
        };
};