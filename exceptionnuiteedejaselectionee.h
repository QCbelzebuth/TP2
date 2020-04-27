#ifndef __EXCEPTIONNUITEEDEJASELECTIONEE_H__
#define __EXCEPTIONNUITEEDEJASELECTIONEE_H__
#include <stdexcept>
#include <string>

using namespace std;

class ExceptionNuiteeDejaSelectionee : public exception {
private:
    string message;
public:

    ExceptionNuiteeDejaSelectionee(int nuitees) {
        this->message = "EXCEPTION --  Erreur vous avez deja selectionne vos nuitees ";
    }
    const char* what() const noexcept {
        return this->message.c_str();
    }
};

#endif // __EXCEPTIONNUITEEDEJASELECTIONEE_H__

