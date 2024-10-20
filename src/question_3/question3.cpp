#include "question3.h"

using std::cin; using std::cout;

bool test_config()
{
    return true;
}


string get_fib_number(int runs_amount)
{
    int num1 = 0;
    int num2 = 1;
    int num3;
    string fib_string;

    for (auto i = 0; i < runs_amount; i++)
    {
        fib_string +=(std::to_string(num1) + " ");

        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    fib_string +=std::to_string(num1);

    return fib_string;
}


void display_menu()
{
    cout << "-------------------------\n\n";
    cout << "1- Get Fib Number\n";
    cout << "2- Exit\n\n";
    cout << "-------------------------\n\n";
}


void menu_controller()
{
    enum menu_options {fib_number=1, exit};
    int user_menu_choice;
    int num;
    char user_exit_confirmation;

    do
    {
        display_menu();
        
        cout << "Enter a Menu option: ";
        cin >> user_menu_choice;

        switch (user_menu_choice)
        {
        case fib_number:
            cout << "\nFib Number:\n\n Please enter the amount of times you would like to run the fibonacci sequence (between 1 and 15): ";

             do{
                cin >> num;
                if(!(num >= 1 && num <= 15))
                {
                    cout << "\n Invalid input, please enter an amount between 1 and 15: ";
                }
            }
            while (!(num >= 1 && num <= 15));
            
            cout << "\n= " << get_fib_number(num) << "\n\n";

            break;

        case exit:
            cout << "Are you sure you want to exit? (Y or y): ";
            cin >> user_exit_confirmation;
            if (!(user_exit_confirmation == 'Y' || user_exit_confirmation == 'y'))
            {
                user_menu_choice = 0;
            }
            else
            {
                cout << "Exiting program... Goodbye :)\n";
            }
            break;

        default:
            cout << "Invalid option was entered. Please enter an option given on the menu (1, or 2).\n\n";
            break;
        }
    }
    while(user_menu_choice !=2);
}