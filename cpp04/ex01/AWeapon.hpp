#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
    private:
        std::string _name;
        int         _apcost;
        int         _damage;

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon&);
        virtual ~AWeapon();
        AWeapon &operator=(const AWeapon& op);

        std::string         getName() const;
        int                 getApCost() const;
        int                 getDamage() const;

        virtual void        attack() const;
};

#endif
