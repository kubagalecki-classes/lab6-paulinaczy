#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>
#include "Human.hpp"

using std::vector;
using std::list;
using std::for_each;
using std::transform;
using std::iterator;

void funkcja(Human& ludzik)
{
	ludzik.birthday();
}

std::vector< char > foo(std::list< Human >& people)
{
	std::vector< char > ret_v(people.size());
	std::for_each(people.begin(), people.end(), funkcja);
	std::transform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& ludzik){if (ludzik.isMonster() == true){return 'n';}else{return 'y';}});
	return ret_v;
}
