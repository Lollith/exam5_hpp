#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
class ASpell;
class ATarget
{
	private:
		std::string type;

		ATarget(){}
		ATarget(ATarget const &copy){
			*this = copy;
		}

		ATarget &operator=(ATarget const &rhs)
		{
			(void) rhs;
			return (*this);
		}

	public:
		ATarget(std::string mytype): type(mytype){
		// 	std::cout <<getName()<< ": This looks like another boring day." << std::endl;
		}

		virtual ~ATarget(){
			// std::cout <<getName()<< ": My job here is done!"<< std::endl;
		}

		const std::string &getType( void )const{
			return (type);	
		}

		

		// void setTitle(std::string const & mytitle)
		// {
		// 	title = mytitle;
		// }

		virtual ATarget *clone() const = 0;

		// void getHitBySpell(ASpell const &spell) const;
void getHitBySpell(ASpell const &spell) const
{
	std::cout<<type<<" has been "<<spell.getEffects()<<"!" <<std::endl;
}
};

#include "ASpell.hpp"

#endif