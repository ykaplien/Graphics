#ifndef HEADER_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "mlx.h"
# include <math.h>
# include <stdio.h>

typedef struct  s_dot
{
	int			x;
	int			y;
	int			z;
	int			color;
}				t_dot;

typedef struct  s_geo
{
	int			max_x;		
	int			max_y;///////		DATA
	t_dot		**dot;
	t_dot		**map;
	/////////////////////////
	int			zoom;
	int			pos_x;
	int			pos_y;
	int			pos_z;///////		OPERATIONS
	int			rot_x;
	int			rot_y;
	int			rot_z;
	/////////////////////////
    int         bpp;
	void		*mlx_ptr;////		MLX
	void		*win_ptr;
	void		*window;
	/////////////////////////

}				t_geo;

void			init(t_geo *geo);
#endif
