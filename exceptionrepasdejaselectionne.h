#ifndef __EXCEPTIONREPASDEJASELECTIONNE_H__
#define __EXCEPTIONREPASDEJASELECTIONNE_H__
#include <stdexcept>
#include <string>

using namespace std;

class ExceptionRepasDejaSelectionne : public exception {
private:
    string message;
public:

    ExceptionRepasDejaSelectionne(int repas) {
        this->message = "EXCEPTION -- Erreur vous avez deja selectionne vos repas";
    }
    const char* what() const noexcept {
        return this->message.c_str();
    }
};

#endif // __EXCEPTIONREPASDEJASELECTIONNE_H__

