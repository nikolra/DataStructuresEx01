#include "AppUI.h"

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
