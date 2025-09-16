#pragma once

#ifdef QSR_PLATFORM_WINDOWS 
extern qsr::Application* qsr::CreateApplication();

int main(int argc, char** argv) {
	qsr::Application* application = qsr::CreateApplication();
	application->Start();
	application->Run();
	application->Exit();
	delete application;
}

#endif