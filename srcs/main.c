#include "../includes/header.h"

int		main(void)
{
	t_geo	*geo = NULL;

	if (argc == 1)
	{
        geo = (t_geo*)ft_memalloc(sizeof(t_geo));
    	init(geo);    
	}
	else
		exit(0);
    return (0);
}

void	init(t_geo *geo)
{
	geo->zoom = 1;
}