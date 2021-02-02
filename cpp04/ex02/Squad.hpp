#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad;

class Squad: public ISquad
{
    private:
        typedef struct  s_units
        {
            ISpaceMarine    *_unit;
            struct s_units  *_next;
        }               t_units;
        
        int         _units_count;
        t_units     *_units_list;

    public:
        Squad();
        Squad(const Squad&);
        virtual ~Squad();
        Squad &operator=(const Squad& op);

        // Getter / Setter
        int                     getCount() const;
        ISpaceMarine*           getUnit(int) const;

        int                     push(ISpaceMarine*);

};

#endif