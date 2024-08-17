#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Constructor called" << std::endl;
    num_contacts = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Destructor called" << std::endl;
}

void PhoneBook::add(Contact _contact)
{
    _contact.set_index(num_contacts);
    if (num_contacts == 8) 
    {
        for (size_t i = 0; i < 7; i++)
        {
            contacts[0].~Contact();
            contacts[i] = contacts[i + 1];
            contacts[i].set_index(i);
        }
        contacts[7] = _contact;
        contacts[7].set_index(7);
    }
    else  
    {
        contacts[num_contacts] = _contact;
        num_contacts++;
    }  
}

Contact PhoneBook::search(int _index)
{
    return (contacts[_index]);
}

int PhoneBook::get_num_contacts()
{
    return (num_contacts);
}