#ifndef __EXCEPTIONREPAS_H__
#define __EXCEPTIONREPAS_H__
#include <stdexcept>
#include <string>

using namespace std;

class ExceptionRepas : public exception {
private:
    string message;
public:

    ExceptionRepas(int repas) {
        this->message = "EXCEPTION -- Le nombre de repas ne peut pas etre inferieur ou egale a zero. Recommencez." ; 
    }
    const char* what() const noexcept {
        return this->message.c_str();
    }
};

#endif // __EXCEPTIONREPAS_H__
