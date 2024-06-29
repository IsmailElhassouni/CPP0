#make a make file for cpp files compile with the follwing  c++ -Wall -Wextra -Werror -std=c++98 ?
NAME = Contact
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
src=PhoneBook.cpp Contact.cpp main.cpp


all: $(NAME)

$(NAME): $(src)
		$(CC) $(CFLAGS) *.cpp -o $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all