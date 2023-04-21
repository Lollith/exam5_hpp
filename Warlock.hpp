#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;		

		Warlock(){}
		Warlock(Warlock const &copy){
			*this = copy;
		}

		Warlock &operator=(Warlock const &rhs)
		{
			(void) rhs;
			return (*this);
		}

	public:
		Warlock(std::string myname, std::string mytitle): name(myname), title(mytitle){
			std::cout <<getName()<< ": This looks like another boring day." << std::endl;
		}

		~Warlock(){
			std::cout <<getName()<< ": My job here is done!"<< std::endl;
		}

		const std::string &getName( void )const{
			return (name);	
		}

		const std::string &getTitle()const{
			return (title);	
		}

		void setTitle(std::string const & mytitle)
		{
			title = mytitle;
		}

		void introduce() const{
		std::cout <<getName()<<": I am "<<getName()<<", "<< getTitle()<<"!"<< std::endl;
		}

};

#endif