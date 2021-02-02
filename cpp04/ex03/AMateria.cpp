#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
:
	_type(type),
	_xp(0)
{}

AMateria::AMateria(const AMateria& copy)
:
	_type(copy._type),
	_xp(copy.getXP())
{}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(const AMateria& op)
{
	if (this == &op)
		return (*this); 
	this->_xp = op.getXP();
	return (*this);
}
const std::string& 	AMateria::getType(void)	const	{ return (this->_type); }

unsigned int		AMateria::getXP(void) const		{ return (this->_xp); }

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
