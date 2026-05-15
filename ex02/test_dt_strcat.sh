cc -Wextra -Wall -Werror ft_strcat.c
./a.out 'ABC'
./a.out 'ABA', 'ABZ'
./a.out 'Brz', ''
./a.out 'Da\0k', ''
./a.out 'Darek', 'Darek'
./a.out 'Darek', ''
./a.out 'Da556k', 'darek'
./a.out 'Darek', 'darek'

