#ifndef __EXCEPTIONNUITEE_H__
#define __EXCEPTIONNUITEE_H__
#include <stdexcept>
#include <string>

using namespace std;

class ExceptionNuitee {
private:
    string message;
public:

    ExceptionNuitee(int nuitees) {
        this->message = "EXCEPTION -- Le nombre de nuitees ne peut pas etre inferieur ou egale a zero. Recommencez.";
    }
    const char* what() const noexcept {
        return this->message.c_str();

    }
};

#endif // __EXCEPTIONNUITEE_H__