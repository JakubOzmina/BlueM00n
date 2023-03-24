#include <BlueM00n.h>

class Sandbox : public BlueM00n::Application {
public:
	Sandbox() {
		BM_CLIENT_INFO("Initialized App!");
	}

	~Sandbox() {

	}
};


BlueM00n::Application* BlueM00n::CreateApplication() {
	return new Sandbox();
}