#ifndef ANOTHER_HPP
# define ANOTHER_HPP

# include "Victim.hpp"

class Another : public Victim
{
    public:
        Another();
        Another(const std::string & name);
        Another(const Another & copy);
        virtual ~Another();
        Another &operator=(const Another& op);

        void    getPolymorphed(void) const;
};

#endif
