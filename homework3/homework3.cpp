#include <iostream>
#include <vector>
#include <iomanip>
using namespace std; 

class MemoryManagement {
private:
    vector<int> pageTable; //Maps logical pages to physical frames

public:
    MemoryManagement() {
    // Initialize the page table with large size
        for (int i = 0; i < 256; ++i) { 
            pageTable.push_back(i * 2);
        }
    }

    void translateAddress(unsigned int logicalAddress) {
        unsigned int pageNumber = (logicalAddress >> 8) & 0xFF; // Extract page number
        unsigned int offset = logicalAddress & 0xFF; // Extract offset

        //error handling for page fault
        if (pageNumber >= pageTable.size()) {
            cout << "Page fault at address: 0x" << hex << logicalAddress << endl;
        } else {
            //print logical address, page number, and offset
            cout << "Logical Address: 0x" << hex << logicalAddress
                 << " => Page Number: 0x" << hex << pageNumber
                 << ", Offset: 0x" << hex << offset << endl;
        }
    }
};

int main() {
    //declare memory management object
    MemoryManagement mm;

    // Sample input
    vector<unsigned int> logicalAddresses = {0x3A7F, 0xABCD, 0x5678};

    for (auto address : logicalAddresses) {
        mm.translateAddress(address);
    }

    return 0;
}
