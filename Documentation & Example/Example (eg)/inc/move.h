#ifndef MOVE_H
# define MOVE_H

typedef struct		s_move
{
	int				row;
	int				col;
	int				rating;
	struct s_move	*next;
}					t_move;

#endif
