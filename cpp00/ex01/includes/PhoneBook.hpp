#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip> 
#include "Contact.hpp"

# define RED	"\033[1;31m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define BLUE	"\e[1;34m"
# define GREEN  "\033[1;32m"
# define END	"\x1b[0m"

class PhoneBook{
    private:
        Contact   contacts[8];
        int       num_contacts;
    public:
    /*  Constructor & Desctructor   */
        PhoneBook();
        ~PhoneBook();

        void        add(Contact);
        Contact    search(int _index);
        void        set_num_contacts(int num);
        int         get_num_contacts();
};

#endif