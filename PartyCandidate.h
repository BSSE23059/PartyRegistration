#ifndef PARTYREGISTRATION_PARTYCANDIDATE_H
#define PARTYREGISTRATION_PARTYCANDIDATE_H
#include <iostream>
#include "Candidate.h"
using namespace std;

class PartyCandidate : public Candidate{
private:
    string candidateParty;
public:
    PartyCandidate( string canName, string canCNIC, string canGender, string canDOB,string canParty,Address& address );
    const string getCandidateParty() const;
    void setCandidateParty(string canParty);
    void nominateOnSector(const string& secName);
};


#endif //PARTYREGISTRATION_PARTYCANDIDATE_H
