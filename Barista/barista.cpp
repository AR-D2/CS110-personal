#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name, order, conf;
    int cost, attempts;

    cost = 0; attempts = 0;

    cout << "Hello and Welcome to our shop! What's your name?\n" << endl;
    
    while (true)
    {

        cin >> name;
        attempts++;
        if (attempts >= 3)
        {
            cout << "TOO MANY INAPPROPRAIATE ATTEMPTS!!!\nEXITING THE PROGRAM..." << endl;
            return 1;
        }

        for (int i = 0; i < name.length(); i++)
        {
            name[i] = tolower(name[i]);
        }

        if (name == "nigger" || name == "nigga" || name == "fuck" || name == "fuk" || name == "shit" || name == "bitch" || name == "pajeet" ||
            name == "stupid" || name == "idiot" || name == "dumb" || name == "ass" || name == "bastard" || name == "jeet" || name == "slut" ||
            name == "whore" || name == "dick" || name == "cock" || name == "pussy" || name == "cunt" || name == "faggot" || name == "fag" ||
            name == "gay" || name == "homo" || name == "dyke" || name == "retard" || name == "moron" || name == "loser" || name == "prick")
        {
            cout << "That is inappropriate, please enter an appropriate name\n";
        }

        else if (name.find(",") != string::npos ||
                 name.find("*") != string::npos ||
                 name.find("/") != string::npos ||
                 name.find("?") != string::npos ||
                 name.find("&") != string::npos )
             {   
                cout << "inappropriate, please enter an appropriate name\n";
             }

        else
        {
            break;
        }
    }
        name[0] = toupper(name[0]);
        cout << "\nHi " << name << "," << " what can I get you today?\n\n" <<
            "Cappuchino       4$\n"
            "Frappuchino      6$\n"
            "Regular          2$\n\n"


            "1. press 'C' for Cap\n"
            "2. press 'F' for Frappe\n"
            "3. press 'R' for Regular\n" 
            << endl;

        while (true)
        {
            cout << "Press C/F/R to order or type 'done' to finish the order\n" << endl;

            cin >> order;
            order[0] = toupper(order[0]);
            

            if (order == "C")
            {
                cout << "Are you sure you want to add 'Cappuchino' to your order?\nPress y to confirm\n" << endl;
                cin >> conf;
                conf[0] = tolower(conf[0]);

                if (conf == "y")
                {
                    cout << " your 'Cappuchino' is being prepared" << endl;
                    cost += 4;
                    cout << "\n\nTotal = '" << cost << "$'\n\n" << endl;
                }
                else
                {
                    cout << "'Cappuchino' not added\n" << endl;
                }
            }



            else if (order == "F")
            {
                cout << "Are you sure you want to add 'Frappuchino' to your order?\nPress y to confirm\n" << endl;
                cin >> conf;
                conf[0] = tolower(conf[0]);

                if (conf == "y")
                {
                    cout << " your 'Frappuchino' is being prepared" << endl;
                    cost += 6;
                    cout << "\n\nTotal = '" << cost << "$'\n\n" << endl;
                }
                else
                {
                    cout << "'Frappuchino' not added\n" << endl;
                }
            }



            else if (order == "R")
            {
                cout << "Are you sure you want to add 'Regular Coffee' to your order?\nPress y to confirm\n" << endl;
                cin >> conf;
                conf[0] = tolower(conf[0]);

                if (conf == "y")
                {
                    cout << " your 'Regular Coffee' is being prepared" << endl;
                    cost += 2;
                    cout << "\n\nTotal = '" << cost << "$'\n\n" << endl;
                }
                else
                {
                    cout << "'Regular Coffee' not added\n" << endl;
                }
            }



            else if (order == "Done")
            {
                cout << "Are you sure you want to exit?\nPress 'y' to confirm\n" << endl;
                cin >> conf;
                conf[0] = tolower(conf[0]);

                if (conf == "y")
                {
                    cout << "\nAwesome " << name << " your order will be right up\n" << "your total cost is '" << cost << "$'\n" << endl;
                    break;
                }
                else
                {
                    cout << "Okay keep on shoping\n" << endl;
                }
            }



            else
            {
                cout << "We don't have that. Please choose something from the menu.\n" << endl;
            }
        }
    return 0;
}