#include "ColorCoderTest.h"

    void testNumberToPair(int pairNumber,
        TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    void DisplayColorCoding()
    {
        std::cout << "\n-------25-pair color code-------" << std::endl;
        std::cout << " Pair No.     Major Color     Minor Color" << std::endl;
        int totalCount = numberOfMajorColors * numberOfMinorColors;
        for (int index = 1; index <= totalCount; index++)
        {
            ColorPair colorPair = GetColorFromPairNumber(index);
            std::cout << index << "\t\t" << colorPair.ToString() << std::endl;
        }
    }