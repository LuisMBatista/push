/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:12:52 by lumiguel          #+#    #+#             */
/*   Updated: 2024/04/06 16:53:17 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int main (int argc, char**argv )
{
    stack_node    *a;
    //stack_node    *b;
    
    a = NULL;
    //b = NULL;
    if (argc == 1 || (argc == 2 && argv[1][0]))
        return (1);
    else if (argc == 2)
        argv = split(argv[1], ' ');
    init_stack_a(&a,argv + 1);
    if (!stack_sorted(a))
    {
        if(ft_lstsize(&a->pao)==2)
            sa(&a);
        else if (ft_lstsize(&a->pao) == 3)
            sort_3(&a);
        //else
        //    sort_stacks(&a, &b);
    }
    free_stack(&a);
    return(0);
}