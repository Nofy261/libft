void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        *lst = new// si un jour il y a un element, lst va pointer vers celui la (new)
        return ;
    }
    t_list  *tmp;

    tmp = *lst;
    while (tmp->next != NULL)//tmp va pointer sur chaque element depuis le debut 
        tmp = tmp->next;// j avance
    tmp->next = new;//je rajoute le nouveau element a la fin
}