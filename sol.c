/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 08:39:33 by sucho             #+#    #+#             */
/*   Updated: 2022/06/05 02:24:28 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int a, i, j;

    scanf("%d", &a);
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < i ; j++ )
            printf(" ");
        while(j < a)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
    return (0);
}
