/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:19:49 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/25 20:07:23 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

//when you want to understand this use ex09/ft_ft.c 
//itś the same thing itś just that that was wasfor int datatype, this is for structure datatype

void set_point(t_point *point)
{
    (*point).x = 42;
    (*point).y = 21;

    // //the above can we re-written as 
    // point->x = 42;
    // point->y = 21;
}


int main(void)
{
    t_point house;

    house.x = 6;
    house.y = 15;

    //The function setpoint changes whatever values that was
    //initially assigned to the members of the structure house
    //to 42 and 21 respectively

    set_point(&house);
    printf("house.x was 6 but its now %i\n", house.x);
    printf("house.y was 15 but its now %i\n", house.y);

    return (0);
}

// int main(void)
// {
//     // //method 1 of declaring a strcture and initilaizing
//     // //it member datatypes
//     // struct temistructure ts;   //defined my strucuture variable as ts
//     // ts.mynum = 13;
//     // ts.myletter = 't';
//     // ts.mystring = "Temi is a fine girl";

//     //method 2 of declaring a strcture and initilaizing
//     //it member datatypes
//     //without typedef
//     struct temistructure ts = {13, 't', "Temi is a fine girl"};
//     //with typedef
//     tems ts = {13, 't', "Temi is a fine girl"};
//     ts.mystring = "Akintunde is hot";

//     printf("%i\n%c\n%s", ts.mynum, ts.myletter, ts.mystring);
//     return (0);
// }


