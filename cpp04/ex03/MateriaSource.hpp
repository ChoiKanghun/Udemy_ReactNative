#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       _templates[4];

    public:
        // Coplien
        MateriaSource();
        MateriaSource(const MateriaSource&);
        virtual ~MateriaSource();
        MateriaSource &operator=(const MateriaSource& op);

        // Getter - Setter

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif