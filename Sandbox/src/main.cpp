#include <iostream>
#include <QuasarEngine.h>


class SandboxApp : public qsr::Application {
public:
	SandboxApp() {
		std::cout << "Hello world!" << std::endl;
	}
	~SandboxApp() {
		std::cout << "Goodbye world!" << std::endl;
	}

};

qsr::Application* qsr::CreateApplication() {
	return new SandboxApp();
}