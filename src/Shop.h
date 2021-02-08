#include <map>
#include <string>

class Shop
{
public:
    Shop();
    int getShopXPosition();
    int getShopYPosition();
    void playerArrived(Map& gameMap, Player& mainPlayer, Shop& gameShop);
    void purchaseArmor(Player& mainPlayer);
    void purchaseHealth(Player& mainPlayer);
    void purchaseWeapon(Player& mainPlayer);
private:
	int mShopXPosition;
    int mShopYPosition;
};
