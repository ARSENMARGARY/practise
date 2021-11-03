#include <iostream>
#include "class_prototype.h"
using namespace std;



    //set and get

 void  Planet:: set_name(string name)
 {
     m_name = name;
 }
       string  Planet::get_name()
       {
           return m_name;
       }

       void  Planet::set_m_distance(double distance)
       {
           m_distance = distance;
       }
       double  Planet::get_m_distance()
       {
           return m_distance;
       }

       void  Planet::set_m_radius(double radius)
       {
           m_radius = radius;
       }
       double  Planet::get_m_radius()
       {
           return m_radius;
       }

       void  Planet::set_m_massa(double massa)
       {
           m_massa = massa;
       }
       double Planet:: get_m_massa()
       {
           return m_massa;
       }

// gravitation function implementation

       double Planet:: gravitation()
       {
           return m_g * (m_massa / (m_radius*m_radius));
       }



// class Student set and get


void Student::set_name( char* arr)
{
   
    for(int i = 0; i < 20; ++i)
    m_point_name[i] = arr[i];
}

char* Student:: get_name()
{
    return m_point_name;
}

void Student::set_surname( char* arr)
{
    
    for(int i = 0; i < 40; ++i)
    m_point_surname[i] = arr[i];
}

char* Student:: get_surname()
{
    return m_point_surname;
}

// class Empleyee 

Employee::Employee(string name,int year,int sallary,string address)
{
        m_name = name;
        m_year = year;
        m_sallary = sallary;
        m_address = address;
}

void Employee:: print_info()
{

    cout << m_name << '\t' << '\t' << 
    m_year << '\t' << '\t' << 
    m_sallary << " $" << '\t' << '\t' << 
    m_address << '\t' << '\t' << endl;

}

//class Circle

Circle::Circle(double radius)
{
    m_radius = radius;
}

void Circle:: get_area()
{
    cout << "The area: " << m_pi * (m_radius * m_radius) << endl;
}

void Circle:: get_circumferenc()
{
    cout << "The circumference: " << 2 * m_pi * m_radius << endl;
}


// class Triangle

double Triangle::get_perimetr()
{
    return m_a + m_b + m_c;
}

double Triangle::get_area()
{
    return (m_a * m_b ) / 2;
}


//class Complex

Complex::Complex(int real,int imag)
{
    m_real = real;
    m_imag = imag;
}


void Complex::sum(const Complex& other,const Complex& other2)
{
    this -> m_real = other.m_real + other2.m_real;
    this -> m_imag = other.m_imag + other2.m_imag;
    cout << "Add is : " << m_real << " + " << m_imag << "i" << endl;
} 

void Complex::mul(const Complex& other,const Complex& other2)
{
    this -> m_real = other.m_real * other2.m_real;
    this -> m_imag = other.m_imag * other2.m_imag;
    cout << "Mul is : " << m_real << " * " << m_imag << "i" << endl;
}

void Complex::sub(const Complex& other,const Complex& other2)
{
    this -> m_real = other.m_real - other2.m_real;
    this -> m_imag = other.m_imag - other2.m_imag;
    cout << "Sub is : " << m_real << " - " << m_imag << "i" << endl;
}



// class Fib

int Fib::generator(int num)
{
    if(num <= 0){return 0;}
    return generator(num-1) + generator(num-2);
}


// class Vertex

void Vertex::print()
{
    
    point arr[5];
    for(int i = 0; i < 5; ++i)
    {
        arr[i].m_x = (rand() % 100) - 50 ;
        arr[i].m_y = (rand() % 100) -50 ;
    }

    for(int i = 0; i < 5; ++i)
    {
      cout << "point [" << i+1 << "] " << "("  << arr[i].m_x << "," <<  arr[i].m_y << ")" << endl ;
    }
}