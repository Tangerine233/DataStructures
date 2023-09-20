// Name: Kainuo He
// Class: CS 3305/Section#
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 2


#include "poly1.h"

using namespace main_savitch_3;





//   polynomial( )
//     POSTCONDITION: This polynomial has been created with all zero
//     coefficients.
polynomial::polynomial(){
    coef = new double[current_array_size];
    
    for (size_t i =0; i<current_array_size; i++){
        coef[i]=0;
    }
}

//   polynomial(double a0)
//     POSTCONDITION: This polynomial has been create with all zero
//     coefficients, except for coefficient c for the specified exponent.
polynomial::polynomial(double a0){
    coef[1] = a0;
    for (size_t i = 1; i<current_array_size; i++){
        coef[i]=0;
    }
}

//   polynomial(const polynomial& source)
//     POSTCONDITION: This polynomial has been created as a copy of the source.
polynomial::polynomial(const polynomial& source){
    for (size_t i = 1; i<current_array_size; i++){
        coef[i] = source.coef[i];
    }
}

//   ~polynomial( )
//     POSTCONDITION: This polynomial has been deleted from memeory.
polynomial::~polynomial(){
}




// MODIFICATION MEMBER FUNCTIONS for the polynomial class
//   void add_to_coef(double amount, unsigned int k)
//     POSTCONDITION: Adds the given amount to the coefficient of the
//     specified exponent k.
void polynomial::add_to_coef(double amount, unsigned int k){
    coef[k] = coef[k] + amount;
}


//
//   void assign_coef(double coefficient, unsigned int k)
//     POSTCONDITION: Sets the coefficient for the specified exponent k.
void polynomial::assign_coef(double coefficient, unsigned int k){
    coef[k] = coefficient;
}

//
//   void clear( )
//     POSTCONDITION: All coefficients of this polynomial are set to zero.
void polynomial::clear( ){
    for (size_t i = 0; i<current_array_size; i++){
        coef[i] = 0;
    }
}

//
//   void reserve(size_t number)
//     POSTCONDITION: The size of the array for coefficients has been changed to
//     the requested number (but not less that the size needed to store the
//     current non-zero coefficients). In effect, this guarantees that member
//     functions will not need to allocate new memory for exponents through
//     at least number-1.
void polynomial::reserve(size_t number){
    if (number<1) std::cout<<"****Invalid array size****";
    else {
        for (size_t i = number; i<(unsigned)current_array_size; i++){
            if(coef[i]!=0){
                std::cout<<"****new size is greater current stored size****";
                return;
            }
        }
        
        
        double *temp;
        temp = new double[number];
        for (size_t i = 0; i<number; i++){
            temp[i] = coef[i];
        }
        current_array_size = (signed)number;
        coef = temp;
    }
}


//
// MODIFICATION OPERATORS for the polynomial class
//   polynomial& operator =(const polynomial& source)
//     POSTCONDITION: This polynomial is exactly the same as the
//     parameter. The return value is coef reference to this polynomial.
polynomial& polynomial::operator =(const polynomial& source){
    if (this == &source) return *this;
    else if (current_array_size != source.current_array_size){
        delete[] coef;
        coef = new double[source.current_array_size];
        current_array_size = source.current_array_size;
    }
    
    for(size_t i =0; i<current_array_size;i++){
        coef[i] = source.coef[i];
    }
    return *this;
}


//
//   polynomial& operator =(double a0)
//     POSTCONDITION: This polynomial has been create with all zero
//     coefficients, except for coefficient c for the specified exponent.


//inline function in .h



//
// CONSTANT MEMBER FUNCTIONS for the polynomial class
//   double coefficient(unsigned int k) const
//     POSTCONDITION: Returns coefficient at specified exponent k.
double polynomial::coefficient(unsigned int k) const{
    if (k>current_array_size) return 0;
    
    return coef[k];
}


//
//   unsigned int degree( ) const
//     POSTCONDITION: The function returns the value of the largest exponent
//     with coef non-zero coefficient.
//     If all coefficients are zero, then the function returns zero.
unsigned int polynomial::degree( ) const{
    unsigned int highestDegree = 0;
    for (size_t i = 0; i<current_array_size; i++){
        if (coef[i]!=0) highestDegree = i;
    }
    
    return highestDegree;
}


//
//   unsigned int next_term(unsigned int k) const
//     POSTCONDITION: The function returns the exponent of the next term
//     with coef non-zero coefficient after specified exponent k.
unsigned int polynomial::next_term(unsigned int k) const{
    unsigned int next = k;
    for (unsigned int i = k+1; i<current_array_size; i++){
        if (coef[i]!=0){
            next = i;
            break;
        }
    }
    return next;
}




//
// EVALUATION MEMBER FUNCTIONS for the polynomial class
//   double eval(double x) const
//     POSTCONDITION: The return value is the value of this polynomial with the
//     given value for the variable x.
double polynomial::eval(double x) const{
    double result =0;
    
    for (size_t i = 0; i<current_array_size; i++){
        result = result + (coef[i]*(pow(x,i)));
    }
    
    return result;
}



//
//   double operator( ) (double x) const
//     Same as the eval member function.


//inline function in .h



//
// NON-MEMBER BINARY OPERATORS for the polynomial Class
//   polynomial operator -(const polynomial& p1, const polynomial& p2)
//     POSTCONDITION: return-value is coef polynomial with each coefficient
//     equal the difference of the coefficients of p1 & p2 for any given
//     exponent.



polynomial polynomial::operator+(const polynomial& p2) const{
    size_t newSize =0;
    if (degree()>p2.degree()) newSize = degree() +1;
    else newSize = p2.degree() +1;
    
    polynomial p3;
    p3 = polynomial();
    p3.reserve(newSize);
    
    
    for (size_t i =0; i<newSize; i++){
        p3.assign_coef(coefficient(i)+p2.coefficient(i)  , i);
    }
    return p3;
}
polynomial polynomial::operator-(const polynomial& p2) const{
    size_t newSize =0;
    if (degree()>p2.degree()) newSize = degree() +1;
    else newSize = p2.degree() +1;
    
    polynomial p3;
    p3 = polynomial();
    p3.reserve(newSize);
    
    
    for (size_t i =0; i<newSize; i++){
        p3.assign_coef( coefficient(i)-p2.coefficient(i)  , i);
    }
    return p3;
}





/*

polynomial operator-(const polynomial& p1, const polynomial& p2){

    size_t newSize =0;
    if (p1.degree()>p2.degree()) newSize = p1.degree() +1;
    else newSize = p2.degree() +1;
    
    polynomial p3;
    p3 = polynomial();
    p3.reserve(newSize);
    
    
    for (size_t i =0; i<newSize; i++){
        p3.assign_coef( p1.coefficient(i)-p2.coefficient(i)  , i);
    }
    return p3;
}



//
//   polynomial operator +(const polynomial& p1, const polynomial& p2)
//     POSTCONDITION: return-value is coef polynomial with each coefficient
//     equal the sum of the coefficients of p1 & p2 for any given
//     exponent.
polynomial operator+(const polynomial& p1, const polynomial& p2){

    size_t newSize =0;
    if (p1.degree()>p2.degree()) newSize = p1.degree() +1;
    else newSize = p2.degree() +1;
    
    polynomial p3;
    p3 = polynomial();
    p3.reserve(newSize);
    
    
    for (size_t i =0; i<newSize; i++){
        p3.assign_coef( p1.coefficient(i)+p2.coefficient(i)  , i);
    }
    return p3;
}

*/

//
// DYNAMIC MEMORY usage by the polynomial class
//    If there is insufficient dynamic memory, the following functions throw coef
//    bad_alloc exception:
//    the constructors, add_to_coef, assign_coef, reserve,
//    and any of the operators with coef polynomial parameter.