#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
    private:
        std::string    first_name;
        std::string    last_name;
        std::string    nickname;
        std::string    phone_number;
        std::string    darkest_secret;
        int            index;
    public:
    /*  Constructor & Destructor  */
        Contact();
        ~Contact();

    /*  Getters  */
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret();
        int get_index();

    /*  Setters  */
        void set_first_name(std::string _first_name);
        void set_last_name(std::string _last_name);
        void set_nickname(std::string _nickname);
        void set_phone_number(std::string _phone_number);
        void set_darkest_secret(std::string _darkest_secret);
        void set_index(int _index);
};

#endif