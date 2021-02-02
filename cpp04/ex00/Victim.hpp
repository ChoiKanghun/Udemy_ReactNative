#ifndef VICTIP_HPP
# define VICTIP_HPP

# include <iostream>
# include <string>

class Victim
{
    private:
        std::string _name;

    public:
        Victim();
        Victim(const std::string & name);
        Victim(const Victim&);
        virtual ~Victim();
        Victim &operator=(const Victim& op);

        std::string getName(void) const;

        virtual void getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream & out, Victim & Victim);

#endif
