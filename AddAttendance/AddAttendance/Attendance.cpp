#include "Attendance.h"

using namespace AddAttendance; 		

[STAThreadAttribute]
int main() {
	Application::Run(gcnew Attendance()); 
	return 0;
}
