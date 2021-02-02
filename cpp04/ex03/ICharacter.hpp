#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class ICharacter;
class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {};

        // Getter - Setter
        virtual std::string const & getName() const = 0;

        // Additionnal
        virtual void                equip(AMateria* m) = 0;
        virtual void                unequip(int idx) = 0;
        virtual void                use(int idx, ICharacter& target) = 0;
};

#endif