//
// Created by Olivier Cuisenaire on 04.05.20.
//

#ifndef ASD1_LABS_2020_TRIPARTITE_H
#define ASD1_LABS_2020_TRIPARTITE_H

#include <vector>
#define CONTAINER std::vector

template <typename T>
std::vector<T> tripartite( std::vector<T>& v )
{
    std::vector<T> tmp;
    tmp.reserve(v.size());
    auto it = v.begin();
    auto cursor = it;
    while(it != v.end()) {
       switch(*it % 3) {
          case 0:
             std::move(it, it + 1, std::back_inserter(tmp));
             break;
          case 1:
            std::move(it, it + 1, cursor);
            ++cursor;
       }
       ++it;
    }
    v.erase(cursor, v.end());

    return tmp;
}

#endif //ASD1_LABS_2020_TRIPARTITE_H
