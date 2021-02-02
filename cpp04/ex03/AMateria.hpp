#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
class AMateria;

class AMateria
{
    private:
        std::string     _type;
        unsigned int    _xp;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria&);
        virtual ~AMateria();
        AMateria &operator=(const AMateria& op);

        std::string const & getType() const;        // Returns the materia type
        unsigned int        getXP() const;          // Returns the Materia'XP

        // Additionnal
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif