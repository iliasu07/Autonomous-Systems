#include "random_vector.h"
#include <algorithm>
#include <numeric>

RandomVector::RandomVector(int size, double max_val) { 
    for (int i = 0; i < size; i++) {
        double output = (std::rand() / (double)RAND_MAX) * max_val;
        vect.push_back(output);
    }
}

void RandomVector::print(){
    for (size_t i = 0; i < vect.size(); i++) {
        std::cout << vect.at(i) << " ";
    }
    std::cout << std::endl;
}

double RandomVector::mean(){
    double vect_sum = std::accumulate(vect.begin(), vect.end(), 0.0);
    return (vect_sum / vect.size());     
}

double RandomVector::max(){
    return *std::max_element(vect.begin(), vect.end());
}

double RandomVector::min(){
    return *std::min_element(vect.begin(), vect.end());
}

void RandomVector::printHistogram(int bins){
    double min_value = min();
    double max_value = max();
    std::vector<int>count(bins, 0);
    double bin_width = (max_value - min_value) / bins;

    for (double value : vect) {
        int bin_index = (int)((value - min_value) / bin_width);
        if (bin_index == bins) 
            bin_index--;
        count.at(bin_index)++;
    }
    for (int c : count)
        std::cout << c << " ";
    std::cout << std::endl;

    int max_count = *std::max_element(count.begin(), count.end());
    for (int row = max_count; row > 0; row--) {
        for (int value : count) {
            if (value >= row)
                std::cout << "*** ";
            else 
                std::cout << "    ";
        }
        std::cout << " " << std::endl;
    }
    
}
