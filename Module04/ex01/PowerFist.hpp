# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
				PowerFist(void);
				PowerFist(std::string const & name, int apcost, int damage);
				PowerFist(const PowerFist &other);
				~PowerFist();

	public:
		PowerFist	&operator=(const PowerFist &other);
		void		attack() const override;
};
