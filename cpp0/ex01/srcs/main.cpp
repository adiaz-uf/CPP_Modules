#include <cstring>
#include <cstdlib>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

void   add_contact(PhoneBook *phone)
{
    Contact c;

    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "\nPlease, enter the first name:\n> ";
    std::cin >> first_name;
    c.set_first_name(first_name);

    std::cout << "Please, enter the last name:\n> ";
    std::cin >> last_name;
    c.set_last_name(last_name);

    std::cout << "Please, enter the nickname:\n> ";
    std::cin >> nick_name;
    c.set_nickname(nick_name);

    std::cout << "Please, enter the phone number:\n> ";
    std::cin >> phone_number;
    c.set_phone_number(phone_number);

    std::cout << "Please, enter the darkest secret:\n> ";
    std::cin >> darkest_secret;
    c.set_darkest_secret(darkest_secret);

    phone->add(c);
}


/**
 * Truncates a given string to a specified size by cutting 
 * it off and adding ellipsis if it exceeds the size
 **/
std::string truncate_str(std::string str, size_t size)
{
    if (str.length() > size)
        return (str.substr(0, size - 1) + ".");
    return (str);
}

void search(PhoneBook *phone)
{
    int count;
    int index_to_display;
    std::string display_contact;
    Contact display_c;

    count = phone->get_num_contacts();
    std::cout << std::endl;
    for (int i = 0; i < count; i++) // Loop to display search info of contacts
    {
        Contact new_c = phone->search(i);
      
        std::cout << std::setw(10) << "[" << new_c.get_index() << "]|";
        std::cout << std::setw(10) << truncate_str(new_c.get_first_name(), 10) << "|";
        std::cout << std::setw(10) << truncate_str(new_c.get_last_name(), 10) << "|";
        std::cout << std::setw(10) << truncate_str(new_c.get_nickname(), 10) << std::endl;
    }
    while (true) // Loop to display the info of the index selected
    {
        std::cout <<CYAN "\n Enter the index of the entry to display:\n\n> " END;
        std::cin >> display_contact;
        index_to_display = std::atoi(display_contact.c_str());
        if (!std::cin.fail() && index_to_display >= 0 && index_to_display < count
            && display_contact.length() == 1 && isdigit(display_contact[0]))
        {
            display_c = phone->search(index_to_display);
            std::cout << YELL "\nContact information: \n" END << std::endl;
            std::cout << "First name: " << display_c.get_first_name() << std::endl;
            std::cout << "Last name: " << display_c.get_last_name() << std::endl;
            std::cout << "Nickname: " << display_c.get_nickname() << std::endl;
            std::cout << "Phone number: " << display_c.get_phone_number() << std::endl;
            std::cout << "Darkest secret: " << display_c.get_darkest_secret() << std::endl;
            break;
        }
        else
            std::cout << RED " Not a valid index, select a valid one. " END << std::endl;
    }
}

int main(void)
{
    PhoneBook   phonebook;
    std::string input;
    
    std::cout << CYAN "---------- Welcome to Phonebook ----------" END<< std::endl;
    while (true)
    {
        std::cout <<CYAN "\n    Enter one of the following commands: " << std::endl;
        std::cout << "           ADD, SERACH or EXIT \n\n> " END;
        std::cin >> input;
        if (input.compare("add") == 0 || input.compare("ADD") == 0)
            add_contact(&phonebook);
        else if (input.compare("search") == 0 || input.compare("SEARCH") == 0)
           search(&phonebook); 
        else if (input.compare("exit") == 0 || input.compare("EXIT") == 0)
            break;
        else
            std::cout << RED "\n          !Invalid command!\n" END << std::endl;       
    }
    return 0;
}