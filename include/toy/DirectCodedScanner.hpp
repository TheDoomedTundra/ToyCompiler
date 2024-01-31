#ifndef TOY_DirectCoderScanner_HPP
#define TOY_DirectCoderScanner_HPP

#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

namespace toy {
    class DirectCodedScanner {
        public:
            DirectCodedScanner(istream &stream) : Stream(stream){};

        private:
            istream &Stream;
    };
}

#endif // TOY_DirectCoderScanner_HPP