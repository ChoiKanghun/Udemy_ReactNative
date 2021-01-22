#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        Peon(const std::string & name);
        Peon(const Peon & copy);
        virtual ~Peon();
        Peon &operator=(const Peon& op);

        void    getPolymorphed(void) const;
};

#endif
