#include <iostream>
#include "question2.h"

using std::cin; using std::cout;

bool test_config()
{
    return true;
}


int get_earned_points(int widgets_sold)
{
    int points_earned;

    if (widgets_sold <= 5 && widgets_sold > 0)
    {
        points_earned = widgets_sold;
    }
    else if(widgets_sold <= 10)
    {
        points_earned = 5 * widgets_sold;
    }
    else if(widgets_sold <= 15)
    {
        points_earned = 10 * widgets_sold;
    }
    else if(widgets_sold > 15)
    {
        points_earned = 15 * widgets_sold;
    }
    else
    {
        points_earned = 0;
    }

    return points_earned;
}


void display_menu()
{
    cout << "-------------------------\n\n";
    cout << "1- Get Point Rewards\n";
    cout << "2- Exit\n\n";
    cout << "-------------------------\n\n";
}


void menu_controller()
{
    enum menu_options {point_rewards=1, exit};
    int user_menu_choice;
    int widgets_sold;
    char user_exit_confirmation;

    do
    {
        display_menu();
        
        cout << "Enter a Menu option: ";
        cin >> user_menu_choice;

        switch (user_menu_choice)
        {
        case point_rewards:
            cout << "\nPoint Rewards:\n\n Please enter the amount of widgets sold: ";
            cin >> widgets_sold;
            cout << "\n= " << get_earned_points(widgets_sold) << "\n\n";

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