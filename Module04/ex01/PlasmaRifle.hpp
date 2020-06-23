# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
				PlasmaRifle(void);
				PlasmaRifle(std::string const & name, int apcost, int damage);
				PlasmaRifle(const PlasmaRifle &other);
				~PlasmaRifle();

	public:
		PlasmaRifle	&operator=(const PlasmaRifle &other);
		void		attack() const override;
};
