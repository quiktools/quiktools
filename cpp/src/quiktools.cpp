#include "quiktools.h"
using str = std::string;
namespace fs = std::filesystem;
str get_linux_env(const str &env_name) {
    const char* value = std::getenv(env_name);

    if (value != nullptr) {
        return value;
    } else {
        return "";
    }
}

str list_directory_contents(const str &directory_path) {
    const fs::path = directory_path;
    str list;
    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            list += entry.path().filename() + '\n';
        }
    } catch (const std::filesystem::filesystem_error& e) {
        return "";
    }
    return list;
}