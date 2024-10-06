t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)//tant que le pointeur de lst ne pointe pas vers null
	{
		lst = lst->next;// j avance , je continue a parcourir les elements
	}
	return (lst);
}
	_________________	
//LST = |content | ptrnext|
	------------------
//tant que ptrnext ne pointe pas vers null (while (lst->next != null)
