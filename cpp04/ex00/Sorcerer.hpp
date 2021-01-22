#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;

    public:
        Sorcerer(const std::string & name, const std::string & title);
        Sorcerer(const Sorcerer& copy);
        virtual ~Sorcerer();
        Sorcerer &operator=(const Sorcerer& op);

        std::string getName(void) const;
        std::string getTitle(void) const;

        void polymorph(Victim const & victim);
};

std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer);

#endif
