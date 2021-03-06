/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:43:26 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:43:30 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>
# include <sstream>

class Logger
{
    std::string _fileName;
    
    void        logToConsole(const std::string line);
    void        logToFile(const std::string line);
    std::string makeLogEntry(const std::string msg);
public:
    Logger      (void);
    void        log(std::string const & dest, std::string const & message);
};

#endif
