#pragma once
#pragma once
#include "bat.h"
#include "const.h"

class RightBat : public Bat {
public:
	RightBat(float startx, float starty) : Bat(startx, starty) {}
	void update() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
			rect.move(200.f, -speedy);//0
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
			rect.move(200.f, speedy);//0
		}
		float currx = rect.getPosition().x;
		if (rect.getPosition().y <= 0) {
			rect.setPosition(currx, 0);
		}
		if (rect.getPosition().y >= WINDOW_HEIGHT - height) {
			rect.setPosition(currx, WINDOW_HEIGHT - height);
		}
	}
};
