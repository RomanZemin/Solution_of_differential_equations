#include "IntegralSolver.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]



void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IntegralSolverV2::IntegralSolver GUI;
	Application::Run(% GUI);
}