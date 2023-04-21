NAME = a.out

$(NAME) :
	g++ -o $(NAME) -Wall -Wextra -Werror main.cpp Warlock.cpp ASpell.cpp ATarget.cpp

all: $(NAME)

clean:
	rm -f $(NAME)