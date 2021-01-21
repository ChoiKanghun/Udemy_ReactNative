#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		void	cub3dAttack(std::string const &target);
		void	miniRTAttack(std::string const &target);
		void	minishellAttack(std::string const &target);
		void	printfAttack(std::string const &target);
		void	libasmAttack(std::string const &target);

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap& op);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif

