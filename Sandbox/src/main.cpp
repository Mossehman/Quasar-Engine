#include <iostream>
#include <QuasarEngine.h>



class SandboxApp : public qsr::Application {
public:
	SandboxApp() {
		QSR_INFO("Hello world!");
	}
	~SandboxApp() {
		QSR_FATAL("Goodbye world!");
	}

};

qsr::Application* qsr::CreateApplication() {
	return new SandboxApp();
}