#include "InputManager.h"

bool InputManager::IsSpriteClicked(sf::Sprite sprite, sf::Mouse::Button button, sf::RenderWindow& window)
{
	bool isClicked = false;
	if (sf::Mouse::isButtonPressed(button))
	{
		sf::IntRect rect((int)sprite.getPosition().x, (int)sprite.getPosition().y,
			(int)sprite.getGlobalBounds().width, (int)sprite.getGlobalBounds().height);
		if (rect.contains(GetMousePosition(window)))
		{
			isClicked = true;
		}
	}
	return isClicked;
}

sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow& window)
{
	return sf::Mouse::getPosition(window);
}
