# include <iostream>
# include <cmath>
# include <climits>
# include <iomanip>
# include <cctype>

class Convert
{
	private:
		int		precision;

	public:
				Convert(void);
				Convert(char *arg);
				Convert(const Convert&);
				virtual	~Convert(void);
				Convert &operator=(const Convert& op);
	public:
		void		toChar(double nb) const;
		void		toInt(double nb) const;
		void		toFloat(double nb) const;
		void		toDouble(double nb) const;
};

