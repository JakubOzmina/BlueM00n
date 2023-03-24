#pragma once

#ifdef BM_PLATFORM_WINDOWS 

extern BlueM00n::Application* BlueM00n::CreateApplication();

int main(int argx, char** argv) {
	BlueM00n::Log::Init();
	BM_ENGINE_WARN("Welcome To BlueM00n Engine!");
	auto app = BlueM00n::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error BlueM00n only supports Windows.
#endif