emplace_back is more faster and better thanpush_back
 after this line  vector<int> vect(5);  fyou will try to push back or emplace back some value into it then it will take the value but in case of normal array once you declared the size of array then yoo cant decrease or increase the size
iterators points to the memory where the elemnts get stored
process to write the op of a vector
vecor<int>v(5,100)
vector<int>::iterator it=v.begin()
it will indicate to the mmory where the elemnt is stored to print the value you have to use *(it)
we have some kind of iterators like begin,end,rend,rbegin

auto will automatically know your datatype
when you want to delet bunch of elemnt from am vector then you have to give the start and end value
start value is the 1stvalue whwre as the end is the right after the last value 