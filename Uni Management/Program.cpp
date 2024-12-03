#include "LoginForm.h"  // Include the LoginForm header file
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);



    // Create and configure the main form
    UniManagement::LoginForm^ loginForm =
        gcnew UniManagement::LoginForm();


    // Run the application with the configured main form
    Application::Run(loginForm);

    return 0;
}