#include "exeAddCandidate.h"

void addCandidates(string partyName,string partyRegID){
    int choice;
    char stop;
    do{
        system("clear");
        cout << "Your Party Registration ID is " << partyRegID << endl;
        cout << "_______________________________________________" << endl;
        cout << "                                               " << endl;
        cout << "              Welcome to Home Screen           " << endl;
        cout << "_______________________________________________" << endl;
        cout << "1-> Add Candidates." << endl;
        cout << "2-> Nominate Candidates." << endl;
        cout << "3-> Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        PartyRegistration *partyRegistration = PartyRegistration::getInstance();
        switch (choice) {
            case 1:{
                string canName,gender,dateOfBirth,CNIC,district,town,block;
                int house,street;
                cout << "Enter candidate name: ";
                cin >> canName;
                cout << "Enter candidate gender: ";
                cin >> gender;
                cout << "Enter candidate CNIC: ";
                cin >> CNIC;
                cout << "Enter candidate Date Of Birth: ";
                cin >> dateOfBirth;
                cout << "****** Address of Candidate ******" << endl;
                cout << "Enter candidate residential city: ";
                cin >> district;
                cout << "Enter candidate residential town: ";
                cin >> town;
                cout << "Enter candidate town's block code: ";
                cin >> block;
                cout << "Enter street number: ";
                cin >> street;
                cout << "Enter house number: ";
                cin >> house;
                Address address(district,town,block,street,house);
                auto partyCandidate = new PartyCandidate(canName,CNIC,gender,dateOfBirth,partyName,address);
                partyRegistration->addCandidate(partyCandidate,partyName);
                break;
            }
            case 2:{
                break;
            }
            default:{
                cout << "Invalid Input, Please enter valid input...." << endl;
                break;
            }
        }
        cout <<  "Do you want to continue(Y/N): ";
        cin >> stop;
    }while(stop == 'Y' || stop == 'y');



}