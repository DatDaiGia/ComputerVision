#include "FrmMain.h"
using namespace ComputerVision;

[STAThreadAttribute]
int Main(){
	// sử dụng giao diện windows hiện đại
	Application::EnableVisualStyles();
	// Chạy và chờ đến khi MyForm được đóng lại
	Application::Run(gcnew FrmMain());
	// thoát Main
	return 0;
}