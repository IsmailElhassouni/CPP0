NAME = Contact
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
src=PhoneBook.cpp Contact.cpp main.cpp


all: $(NAME)

$(NAME): $(src)
		$(CC) $(CFLAGS) *.cpp -o $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all