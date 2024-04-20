#include "Address.h"

Address::Address(std::string districtName, std::string areaName, std::string blockCode, int street, int house) {
    district = districtName;
    area = areaName;
    block = blockCode;
    streetNum = street;
    houseNum = house;
    concatenatedAddress = district +", "+ area +", "+ block+ ", " + to_string(streetNum) +", "+ to_string(houseNum);
}

Address::Address() = default;

string Address::getConcatenatedAddress() const {
    return concatenatedAddress;
}
