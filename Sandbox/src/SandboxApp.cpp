#include <Philomath.h>

class Sandbox : public Philomath::Application {
public:
	Sandbox() {

	}
	
	~Sandbox() {

	}


};

Philomath::Application* Philomath::CreateApplication() {

	return new Sandbox();
}