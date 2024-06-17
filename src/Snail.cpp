#include <vector>
#include "Snail.h"

std::vector<int> Snail::snail(const std::vector<std::vector<int>> &snail_map) 
{
    std::vector<int> ret = {};
    if(snail_map.size() == 0) {
        return {}; 
    }
    if(snail_map.size() == 1) return snail_map[0];
    if(snail_map.size() == 2 ) {
        for(const auto& el: snail_map[0]) {
            ret.push_back(el);
        }
        for(auto r_it = snail_map[1].crbegin(); r_it != snail_map[1].crend(); r_it++) {
            ret.push_back(*r_it);
        }
        return ret;
    }
    for(const auto& row: snail_map) {
        ret.push_back(row[row.size() - 1]);
    }
    return ret;
}