#include <iostream>
#include "AppUI.h"
#include "cmake-build-debug/WrongInputException.h"

int main() {
    AppUI app;
    try{
        app.Run();
    }
    catch(WrongInputException exception)
    {
        cout << exception.GetMessage();
    }
}
