#pragma once
#ifndef WINDOW_H
#define WINDOW_H

class Window {
public:
	Window(int w, int h, const char* t, int tfps) {
		width = w;
		height = h;
		title = t;
		targetFPS = tfps;
	}
	void update();

private:
	int width;
	int height;
	const char* title;
	int targetFPS;
};


#endif // !WINDOW_H#pragma once
