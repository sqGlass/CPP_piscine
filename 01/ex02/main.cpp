/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:11:20 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 11:21:28 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"      ///////lishnee
#include "ZombieEvent.hpp"


// void    randomChump( void )
// {
//     ZombieEvent zE;
//     int         random_value1;

//     std::string names[6] = { "Sasha", "Timofey", "Diman",
//     "Dimon", "Niyaz", "Amir" };
//     srand(time(NULL));
//     random_value1 = std::rand() % 6;
//     zE.setZombieType("Capomafioso");
//     Zombie* zoma =  zE.newZombie(names[random_value1]);
//     zoma->announce();
//     delete zoma;
// }


void    randomChump( void )
{
    int random_value1;
    std::string names[6] = { "Sasha", "Timofey", "Diman",
    "Dimon", "Niyaz", "Amir" };
    srand(time(NULL));
    random_value1 = std::rand() % 6;
    Zombie zomb(names[random_value1], "Capomafioso");
}

// void    randomChump( void )
// {
//     int random_value1;
//     int random_value2;
//     Zombie *zomba[6];

//     int ran1[6] = {-1, -1, -1, -1, -1, -1};
//     int ran2[6] = {-1, -1, -1, -1, -1, -1};
//     std::string names[6] = { "Sasha", "Timofey", "Diman",
//     "Dimon", "Niyaz", "Amir" };

//     std::string types[6] = {  "Capomafioso", "Consigliere", "Sotto Capo",
//     "Caporegime", "Regime", "Associate" };
//     srand(time(NULL));
//     for (int i = 0; i < 6; i++)
//     {
//         random_value1 = std::rand() % 6;
//         for (int j = 0; j < 6; j++)
//             if (ran1[j] == random_value1)
//             {
//                 random_value1 = std::rand() % 6;
//                 j = -1;
//             }
//         ran1[i] = random_value1;
//         random_value2 = std::rand() % 6;
//         for (int j = 0; j < 6; j++)
//             if (ran2[j] == random_value2)
//             {
//                 random_value2 = std::rand() % 6;
//                 j = -1;
//             }
//         ran2[i] = random_value2;
//         zomba[i] = new Zombie(names[random_value1], types[random_value2]);
//         zomba[i]->announce();
//     }
//     for (int i = 0; i < 6; i++)
//         delete zomba[i];
// }

int main()
{
    ZombieEvent zE;
    std::cout << "**********************************************************************************" << std::endl;
    std::cout << std::endl;

    zE.setZombieType("Boss");
    std::cout << "**********************************************************************************" << std::endl;
    std::cout << std::endl;
    
    Zombie* leo =  zE.newZombie("Sanya");
    std::cout << "**********************************************************************************" << std::endl;
    std::cout << std::endl;
    
    leo->announce();
    std::cout << "**********************************************************************************" << std::endl;
    std::cout << std::endl;
    
    // randomChump();
    delete leo;
    return (0);
}