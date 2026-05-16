cc -Wextra -Wall -Werror ft_strcmp.c
./a.out 'ABC', 'AB'
./a.out 'ABA', 'ABZ'
./a.out 'Darek', ''
./a.out 'Da\0k', 'darek'
./a.out 'Darek', 'Darek'
./a.out 'Darek', ''
./a.out 'Da556k', 'darek'
./a.out 'Darek', 'darek'

