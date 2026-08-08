#include  <iostream>
#include <filesystem>
namespace fs =std::filesystem;
int main() {
    try {

        for (const auto& i : fs::recursive_directory_iterator("/root")) {
            std::cout <<i  <<std::endl;
        }
    } catch (const fs::filesystem_error error_recieved) {
        std::cout <<"error handled" <<std::endl;
    }
}