#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap;

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap&);
		virtual ~NinjaTrap();
		NinjaTrap &operator=(const NinjaTrap& op);
		void			ninjaShoebox(ClapTrap & );
		void			ninjaShoebox(NinjaTrap & );
		void			ninjaShoebox(ScavTrap & );
		void			ninjaShoebox(FragTrap & );
};

#endif
