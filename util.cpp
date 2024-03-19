#include <iostream>
#include <string>
#include <random>

std::string Ans(){
    std::string ans;
    std::random_device rd;
    std::mt19937 gen(rd());
    
    for(int i=0; i<3; i++){
        std::uniform_int_distribution<int> dis(0,9);
        ans+=std::to_string(dis(gen));
    }
    return ans;
}
std::string Scan(){
    std::string ans;
    std::cin>>ans;
    return ans;
}