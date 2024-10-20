#include "question4.h"

using std::cin; using std::cout;

bool test_config()
{
    return true;
}


double get_dna_p_distance(const string dna1, const string dna2)
{
    double dna_p_distance;
    int errors = 0;
    if (dna1.length() == dna2.length())
    {
        for(int i = 0; i < dna1.length(); i++)
        {
            if(dna1[i] != dna2[i])
            {
                errors++;
            }
        }

        dna_p_distance = static_cast<double>(errors) / dna1.length();
    }
    else
    {
        dna_p_distance = 0;
    }
    return std::round(dna_p_distance * 10000) / 10000;
}


void display_menu()
{
    cout << "-------------------------\n\n";
    cout << "1- Get DNA p-distance\n";
    cout << "2- Exit\n\n";
    cout << "-------------------------\n\n";
}


void menu_controller()
{
    enum menu_options {dna_p_distance=1, exit};
    int user_menu_choice;
    string dna1;
    string dna2;
    char user_exit_confirmation;

    do
    {
        display_menu();
        
        cout << "Enter a Menu option: ";
        cin >> user_menu_choice;

        switch (user_menu_choice)
        {
        case dna_p_distance:
            cout << "\nDNA p-distance:\n\n Please enter the first DNA: ";
            cin >> dna1;
            cout << "\n Please enter the second DNA: ";
            cin >> dna2;
            cout << "\nThe ratio is= " << get_dna_p_distance(dna1, dna2) << "\n\n";

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