t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *the_list;// creation de la liste
    t_list  *element;//boite creer 

    // si lst ne pointe pas vers un element 
    // ou la fonction f n'existe pas 
    // ou si la fonction del n'existe pas
    if ((!lst) || (!f) || (!del)) 
        return (NULL);
    the_list = NULL;
    element = NULL;

    while (lst != NULL) // on parcours la liste tant que le pointeur de lst(lst->next) ne pointe pas sur null
    {
        element = ft_lstnew(f(lst->element)); // On cree une boite qu'on a appliquer la fonction f dessus
        if (!element) // on verifie si la boite a bien etê creer 
        {
            ft_lstclear(&the_list, del); // si la boite n'a pas pu etre cree on free la liste 
            return (NULL); // on arrete la fonction
        }
        // si cela a fonctionner on continuer
        ft_lstadd_back(&the_list, element); // on ajoute la boite a la fin de la liste
        lst = lst->next; // on fais avancer le pointer.
    }
    return (the_list); // on return la liste avec tous les boites a l'interieur de la liste.
}