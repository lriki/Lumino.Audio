#include <TestConfig.h>
using namespace Lumino::Audio;

//#pragma comment(lib, "dinput8.lib")
int main()
{
	//FileManager::

	Logger::Initialize(_T("log.txt"));

	AudioManager::ConfigData data;
	data.FileManager = &FileManager::GetInstance();
	data.StreamCacheObjectCount = 32;
	data.StreamSourceCacheMemorySize = 0;
	data.DMInitMode = DirectMusicInitMode_Normal;
	data.hWnd = NULL;
	RefPtr<AudioManager> manager(AudioManager::Create(data));
	



	//Platform::ApplicationSettings s;
	//Platform::Application app(s);

	//HWND hWnd = Platform::PlatformSupport::GetWindowHandle(app.GetMainWindow());
	//RefPtr<InputManager> manager(InputManager::Create(hWnd));

	//Mouse* mouse = manager->GetMouse();
	//Keyboard* keyboard = manager->GetKeyboard();
	//while (app.DoEvents())
	//{
	//	manager->UpdateFrame();

	//	if (mouse->IsPress(MouseButton_1)) {
	//		printf("on\n");
	//	}
	//	if (mouse->GetWheelState()) {
	//		printf("%d\n", mouse->GetWheelState());
	//	}

	//	int keyCode = (int)keyboard->CheckPressedVirtualButton();
	//	if (keyCode) {
	//		printf("key:%d\n", keyCode);
	//	}


	//	Threading::Thread::Sleep(32);
	//}

	return 0;
}

