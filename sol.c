/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 08:39:33 by sucho             #+#    #+#             */
/*   Updated: 2022/06/05 19:39:44 by sucho            ###   ########.fr       */
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
