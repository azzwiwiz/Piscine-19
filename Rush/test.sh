file=00
Echo "Test rush 00"
cc -c Test.c rush$file.c ft_putchar.c && cc -Wall -Wextra -Werror -Wall -o test rush$file.c ft_putchar.c Test.c && ./test | cat -e && rm test Test.o rush$file.o ft_putchar.o
Echo "--------------------"
file=01
Echo "Test rush $file"
cc -c Test.c rush$file.c ft_putchar.c && cc -Wall -Wextra -Werror -Wall -o test rush$file.c ft_putchar.c Test.c && ./test | cat -e && rm test Test.o rush$file.o ft_putchar.o
Echo "--------------------"
file=02
Echo "Test rush $file"
cc -c Test.c rush$file.c ft_putchar.c && cc -Wall -Wextra -Werror -Wall -o test rush$file.c ft_putchar.c Test.c && ./test | cat -e && rm test Test.o rush$file.o ft_putchar.o
Echo "--------------------"
file=03
Echo "Test rush $file"
cc -c Test.c rush$file.c ft_putchar.c && cc -Wall -Wextra -Werror -Wall -o test rush$file.c ft_putchar.c Test.c && ./test | cat -e && rm test Test.o rush$file.o ft_putchar.o
Echo "--------------------"
file=04
Echo "Test rush $file"
cc -c Test.c rush$file.c ft_putchar.c && cc -Wall -Wextra -Werror -Wall -o test rush$file.c ft_putchar.c Test.c && ./test | cat -e && rm test Test.o rush$file.o ft_putchar.o
Echo "--------------------"
