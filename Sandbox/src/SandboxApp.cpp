#include <BlueM00n.h>

class Sandbox : public BlueM00n::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};


BlueM00n::Application* BlueM00n::CreateApplication() {
	return new Sandbox();
}