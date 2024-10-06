void    ft_lstclear(t_list  **lst, void (*del)(void *))
{
    if (!del) || (!*lst)// si del n existe pas ou si *lst pointe vers null
        return ;
    t_list  *tmp;
    
    while (*lst != NULL)//je supprime un par un les elements jusqu a ce que *lst pointe vers NULL. 
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);//je supprime la ou le pointeur *lst pointe mais pas *lst
        *lst = tmp;
    }
}

//ft_lstdelone supprime le contenu(grace a del) puis libere l element 
// del supprime juste le contenu de l element mais ne le libere pas.
//
//
//
// ft_lstdelone(*lst, del); va :

//    Utiliser del((*lst)->content) pour libérer le contenu.
//    Utiliser free(*lst) pour libérer la structure de l'élément lui-même (t_list).



