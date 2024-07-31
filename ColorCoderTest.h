#include "ColorCoder.h"
#include <assert.h>
using namespace TelCoColorCoder;

    void testNumberToPair(int pairNumber,
        TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor);

    void testPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber);

    void DisplayColorCoding();