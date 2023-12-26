//
// Created by noerlol on 26/12/23.
//

#ifndef QUIKTOOLS_QUIKTOOLS_H
#define QUIKTOOLS_QUIKTOOLS_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <filesystem>

std::string get_linux_env(const std::string &env_name);
std::string list_directory_contents(const std::string &directory_path);

#endif //QUIKTOOLS_QUIKTOOLS_H
