#include "../includes/Contact.hpp"

// Constructor
Contact::Contact()
{
    
}

// Destructor
Contact::~Contact()
{
   
}

std::string Contact::get_first_name()
{
    return (first_name);
}
std::string Contact::get_last_name()
{
    return (last_name);
}
std::string Contact::get_nickname()
{
    return (nickname);
}
std::string Contact::get_phone_number()
{
    return (phone_number);
}
std::string Contact::get_darkest_secret()
{
    return (darkest_secret);
}

int Contact::get_index()
{
    return (index);
}

void Contact::set_first_name(std::string _first_name)
{
    first_name = _first_name;
}

void Contact::set_last_name(std::string _last_name)
{
   last_name = _last_name;
}

void Contact::set_nickname(std::string _nickname)
{
    nickname = _nickname;
}

void Contact::set_phone_number(std::string _phone_number)
{
    phone_number = _phone_number;
}

void Contact::set_darkest_secret(std::string _darkest_secret)
{
    darkest_secret = _darkest_secret;
}

void Contact::set_index(int _index)
{
    index = _index;
}

