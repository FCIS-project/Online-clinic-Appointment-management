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
// Adham hany void bookAppointment() {
    
    
    
/* Appointment appointment;

cout << "\t\t\tBook Appointment\n";
cout << "\t\t\t#################\n\n";
cout << "Please enter pataint ID:" << "  ";
cin >> appointment.patientID;
cout << "\n";
cout << "Please enter doctor ID:" << "  ";
cin >> appointment.doctorID;
cout << "\n";
bool check = false;
for (int i = 0; i < MAX_DOCTORS; i++) {
    if (doctors[i].doctorID == appointment.doctorID) {
        check = true;
        break;
    }
}
if (check) {
    cout << "Doctor is found\n\n ";
    cout << "Please enter the date:" << "   ";
    cin >> appointment.appointmentDate;
    cout << "\n";
    cout << "Please enter the time:" << "    ";
    cin >> appointment.appointmentTime;
    cout << "\n\n";
    createAppointment(appointment.patientID, appointment.doctorID, appointment.appointmentDate, appointment.appointmentTime);
    cout << "\t\t(Appointment Booked successfully)\n";
}
else cout << "Doctor ID not found\n";

}
void createAppointment(int patient_ID, int Doctor_ID, string Date, string Time) {
    if (appointmentCount < MAX_APPOINTMENTS) {

        appointments[appointmentCount].patientID = patient_ID;
        appointments[appointmentCount].doctorID = Doctor_ID;
        appointments[appointmentCount].appointmentDate = Date;
        appointments[appointmentCount].appointmentTime = Time;
        appointmentCount++;
    }
    else cout << "Sorry,My friend,The clinic is full\n";


} */

