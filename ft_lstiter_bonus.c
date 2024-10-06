void    ft_lstiter(t_list *lst, void(*f)(void *))
{
    if ((!lst) || (!f))
        return ;

    while (lst != NULL)
    { 
        f(lst->content);//applique f au premier contenu
        lst = lst->next;//puis on passe de contenu a contenu jusqu a ce que lst pointe vers null
                        //lst est un pointeur qui pointe vers le 1er element puis vers le suivant etc...
                        //l element c est lst->content
    }
}
