#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"
class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;

		ASpell(){}
		ASpell(ASpell const &copy){
			*this = copy;
		}

		ASpell &operator=(ASpell const &rhs)
		{
			(void) rhs;
			return (*this);
		}

	public:
		ASpell(std::string myname, std::string myeffects): name(myname), effects(myeffects){
		// 	std::cout <<getName()<< ": This looks like another boring day." << std::endl;
		}

		virtual ~ASpell(){
			// std::cout <<getName()<< ": My job here is done!"<< std::endl;
		}

		const std::string &getName( void )const{
			return (name);	
		}

		const std::string &getEffects()const{
			return (effects);	
		}

		// void setTitle(std::string const & mytitle)
		// {
		// 	title = mytitle;
		// }

		virtual ASpell *clone() const = 0;

		// void launch(ATarget const &targ) const;
		void launch(ATarget const &targ) const
{
			targ.getHitBySpell(*this);
}
};

#include "ATarget.hpp"

#endif