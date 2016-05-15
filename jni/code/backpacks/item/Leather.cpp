#include "Leather.h"

Leather::Leather(const std::string& name, short id) : Item(name, id - 0x100)
{
	Item::mItems[id] = this;
	setCategory(CreativeItemCategory::ITEMS);
	setIcon(name, 0);
}