
#include        <iostream>
#include        <vector>
#include        <list>
#include        <algorithm>
#include        <ctime>
#include        <iomanip>
#include        <iterator>

int     check_argv(int *argc, char ***argv, std::vector<int> *vect, std::list<int> *list){
    char *end;

    for (int i = 1; i < *argc; ++i){
        vect->push_back(std::strtod(argv[0][i], &end));
        if (errno == EINVAL || errno == ERANGE || *end != '\0' || vect->back() < 1)
            return (1);
        list->push_back(std::strtod(argv[0][i], &end));
    }

    //printing vect
    std::cout << "Before: ";
    for (std::vector<int>::iterator it = vect->begin(); it != vect->end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";

    //printing list
    /*std::cout << "List is:\n";
    for (std::list<int>::iterator it = list->begin(); it != list->end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";*/
    return (0);
}

void    print_list(std::list<int> &list){
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";
}

void    print_vect(std::vector<int> &list){
    for (std::vector<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";
}

std::vector<int>        &sort_vect(std::vector<int> &vect){
   if (vect.size() == 1)
       return (vect);
   else if (vect.size() == 2){
       if (vect[0] > vect[1])
           std::reverse(vect.begin(), vect.end());
       return (vect);
    }
   else {
       std::vector<int>   half;
       std::vector<int>::iterator it = vect.begin();
       std::advance(it, (int)vect.size() / 2);
       half.insert(half.begin(), it, vect.end());
       vect.erase(it, vect.end());
       half = sort_vect(half);
       vect = sort_vect(vect);
       std::vector<int> result(half.size() + vect.size());
       std::merge(vect.begin(), vect.end(), half.begin(), half.end(), result.begin());
       vect = result;
       return (vect);
    }
}


std::list<int>        &sort_list(std::list<int> &list){
   if (list.size() == 1)
       return (list);
   else if (list.size() == 2){
       list.sort();
       return (list);
    }
   else {
       std::list<int>   half;
       std::list<int>::iterator it = list.begin();
       std::advance(it, (int)list.size() / 2);
       half.splice(half.begin(), list, it, list.end());
       half = sort_list(half);
       list = sort_list(list);
       list.merge(half);
       return (list);
    }
}

int	main(int argc, char **argv){
    clock_t start = clock();
    std::vector<int> vect;
    std::list<int> list;

    if ((argc < 2 || check_argv(&argc, &argv, &vect, &list)) &&
        std::cout << "Error: Invalid args\n")
        return (1);   

    vect = sort_vect(vect);
    list = sort_list(list);
    std::cout << "After:  ";
    print_vect(vect);
    //vector
    clock_t processed = clock();
    std::cout << "Time to process a range of " << argc - 1 << 
        " elements with std::vector : " << std::fixed << std::setprecision(5) <<
        (double)(processed - start)/CLOCKS_PER_SEC * 1000000 << " us\n";

    //list
    processed = clock();
    std::cout << "Time to process a range of " << argc - 1 << 
        " elements with std::list :   " << std::fixed << std::setprecision(5) <<
        (double)(processed - start)/CLOCKS_PER_SEC * 1000000 << " us\n";
    return (0);
}
