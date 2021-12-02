/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:53:33 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/02 21:52:06 by yhadari          ###   ########.fr       */
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
	std::ofstream file_replace;
	std::ifstream filename;
	std::string tmp;
	
	if (argc != 4){
		std::cout << "usage:  "<< argv[0] << " filename target replacement" << std::endl;
		return 0;
	}
	file_replace.open("FILENAME.replace");
	filename.open(argv[1]);
	if (filename.fail()){
		std::cout << "replace: error: " << strerror(errno) << ": '" << argv[1] << '\'' << std::endl;
		return 0;
	}
	if (filename.peek() == std::ifstream::traits_type::eof()){
		std::cout << "replace: error: file is empty" << ": '" << argv[1] << '\'' << std::endl;
		return 0;
	}
	while (getline(filename, tmp))
	{
		check_str(tmp, argv[2], argv[3]);
		file_replace << tmp;
		if (!filename.eof())
			file_replace << '\n';
	}
	filename.close();
	file_replace.close();
	return 0;
}