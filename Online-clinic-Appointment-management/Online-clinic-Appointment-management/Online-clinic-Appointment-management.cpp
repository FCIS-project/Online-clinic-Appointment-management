#include <iostream>
using namespace std;


// Person 2
void DisplayDoctors() {
	if (doctorCount == 0) {
		cout << "No Doctors Availble " << endl;
	}
	else {
		for (int i = 0; i < 1; i++) {

			Doctor Doctor = doctors[i];

			cout << "Doctor ID: \t" << Doctor.DoctorID << endl;
			cout << "Doctor Name: \t" << Doctor.name << endl;
			cout << "Specialization: \t" << Doctor.specialization << endl;
			cout << "availableSlots: \t" << Doctor.availableSlots << endl;
			cout << "Consultantion Fee: \t" << Doctor.consultantionFee << endl;
		};
	};
};

void ViewDoctors() {
	DisplayDoctors();
};


int main() {

}
