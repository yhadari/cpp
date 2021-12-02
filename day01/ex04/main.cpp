/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:53:33 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/02 18:17:42 by yhadari          ###   ########.fr       */
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
    found = line.find(s1, found+s2.length());
  }
}

int main (int argc, char **argv)
{
  if (argc != 4 && std::cout << "You Need To Put File & 2 String" << std::endl)
    return 0;
  std::ofstream file_replace("FILENAME.replace");
  std::ifstream filename(argv[1]);
  const std::string s1 = argv[2];
  const std::string s2 = argv[3];
  std::string tmp;
  while (getline(filename, tmp))
  {
    check_str(tmp, s1, s2);
    file_replace << tmp;
    if (!filename.eof())
      file_replace << '\n';
  }
  filename.close();
  file_replace.close();
  
  return 0;
}