#include <vector>
#include "Snail.h"
#include <iostream>

std::vector<int> Snail::snail(const std::vector<std::vector<int>> &snail_map) 
{
    if(snail_map.size() == 0) {
        return {}; 
    }

    std::vector<int> ret = {};

    int width = snail_map[0].size() -1 ;
    int left_edge = 0;
    int right_edge = width;  

    int height = snail_map.size() -1 ;
    int top_edge = 0;
    int bottom_edge = height;  
    int elems = (height+1)*(width+1);


    for(auto it = snail_map[top_edge].cbegin() + left_edge; it != snail_map[top_edge].cend() - width + right_edge; it++) {
        std::cout << "XD" <<std::endl;
        ret.push_back(*it);
    }
    top_edge++;
    if(ret.size() == elems) return ret;

    for(auto it = snail_map.cbegin() + top_edge ; it != snail_map.cend() - height + bottom_edge; it++) {
        const auto& row = *it;
        ret.push_back(row[row.size() - 1]);
    }
    right_edge--;
    if(ret.size() == elems) return ret;

    for(auto r_it = snail_map[bottom_edge].crbegin() + width - right_edge;  r_it != snail_map[bottom_edge].crend() - left_edge; r_it++) {
        ret.push_back(*r_it);
    }
    bottom_edge--;
    if(ret.size() == elems) return ret;
}