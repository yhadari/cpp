/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:53:33 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/30 22:44:57 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void  check_str(std::string &line, const std::string &s1, const std::string &s2){

  std::size_t found = line.find(s1);
  
  while (found!=std::string::npos)
  {
    line.erase(found, s1.length());
    line.insert(found, s2);
    found = line.find(s1);
  }
}

int main (int argc, char **argv)
{
  if (argc != 4 && std::cout << "ERROR" << std::endl)
    return 0;
  std::ofstream file_replace("FILENAME.replace");
  std::ifstream filename(argv[1]);
  const std::string s1 = argv[2];
  const std::string s2 = argv[3];
  std::string str;
  std::string tmp;
  while (getline(filename, tmp))
  {
    str.append(tmp);
    check_str(str, s1, s2);
    if (!filename.eof())
      str.append("\n");
  }
  file_replace << str << std::endl;
  filename.close();
  file_replace.close();
  
  return 0;
}