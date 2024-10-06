
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst == NULL)// s il pointe vers vide ou rien
    {   *lst = new; //le prochain element sera la tete
        return ;
    }
    new->next = *lst;//lepointeur du nouvel element va pointer vers la tete *list;  
    *lst = new;// donc *list n est plus le premier element mais devient l element apres new
}