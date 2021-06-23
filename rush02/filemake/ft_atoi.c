/*  */
/*                                                                            */
/*                                                        ::::::::            */
/*   dcsrushtest.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abarteld <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/19 13:23:12 by abarteld      #+#    #+#                 */
/*   Updated: 2021/06/19 15:16:10 by abarteld      ########   odam.nl         */
/*                                                                            */
/*  */
int	ft_atoi(char *input)
{
	int	loop;
	int	atoi;

	loop = 0;
	while (input[loop] != '\0')
	{
		if (input[loop] >= '0' && input[loop] <= '9')
			loop++;
		else
			return (0);
	}
	loop = 0;
	atoi = 0;
	while (input[loop] != '\0')
	{
		atoi = (atoi * 10) + (input[loop] - 48);
		loop++;
	}
	return (atoi);
}
