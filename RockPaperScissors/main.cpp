#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <windows.h>
using namespace std;

string get_user_choice() 
{
    string choice;
    cout << "Enter your choice: rock, paper, or scissors... ";
    cin >> choice;
    std::transform(choice.begin(), choice.end(), choice.begin(),
                [](unsigned char c){ return std::tolower(c); });
    if ((choice != "rock") && (choice != "paper") && (choice != "scissors")) 
    {
        cout << "That's an invalid input" << endl;
    }
    return choice;
}

string generate_computer_choice()
{
    srand((unsigned) time(NULL));
    int random = 1 + (rand() % 2);
    string gen_choice;
    switch (random)
    {
        case 1:
            gen_choice = "rock";
            break;
        case 2:
            gen_choice = "paper";
            break;
        case 3:
            gen_choice = "scissors";
            break;
    }
    return gen_choice;
}

// Returns 1 for win, 2 for loss, 3 for tie
int compare_choices(string human_choice, string computer_choice)
{
    if (human_choice == computer_choice)
    {
        return 3;
    } else if (human_choice == "rock")
    {
        if (computer_choice == "scissors")
        {
            return 1;
        } else
        {
            return 2;
        }
    } else if (human_choice == "paper")
    {
        if (computer_choice == "rock")
        {
            return 1;
        } else
        {
            return 2;
        }
    } else if (human_choice == "scissors")
    {
        if (computer_choice == "paper")
        {
            return 1;
        } else
        {
            return 2;
        }
    }

    return 3;
}

int main() {
    string choice = get_user_choice();
    string comp_choice = generate_computer_choice();
    int result = compare_choices(choice, comp_choice);
    cout << "You chose... " << choice << endl;
    cout << "The computer chose...";
    Sleep(2000);
    cout << comp_choice << endl;
    Sleep(500);
    if (result == 1)
    {
        cout << "Congratulations! You won!" << endl;
    } else if (result == 2)
    {
        cout << "Sorry, you lost! Try again." << endl;
    } else if (result == 3)
    {
        cout << "Looks like a tie!" << endl;
    } else
    {
        cout << "Something went wrong. Try again." << endl;
    }
    return 0;
}





/*
string remove_trailing_space(string input_string)
{
    bool met_a_char = false;
    char space_char = ' ';
    string out_string = "";
    int end_string_spaces = 0;
    for (int i = 0; i < input_string.length(); i++)
    {
        const char next_char = input_string[i];
        if ((next_char == space_char) && (!met_a_char))
        {
            continue;
        } 
        else if ((next_char != space_char))
        {
            if (!met_a_char)
            {
                met_a_char = true;
            }

            end_string_spaces = 0;
            out_string += next_char;
        }
        else
        {
            end_string_spaces += 1;
            out_string += next_char;
        }
    }

    for (int i = 0; i < end_string_spaces; i++) 
    {
        out_string.pop_back();
    }

    return out_string;
}
*/