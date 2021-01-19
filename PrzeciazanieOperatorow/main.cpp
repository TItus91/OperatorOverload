#include <iostream>
#include <string>

struct Vector2
{
	float x, y;

	Vector2 (float x, float y)
		:x(x),y(y)
	{

	}

	Vector2 Add(const Vector2& nowy) const
	{
		return Vector2(this->x + nowy.x, this->y + nowy.y);
	}

	Vector2 operator+ (const Vector2& nowy) const
	{
		return this->Add(nowy);
	}



};

std::ostream& operator<< (std::ostream& stream, const Vector2& vec)
{
	stream << "x: " << vec.x << " y: " << vec.y << std::endl;
	return stream;
}

int main()
{

	Vector2 jeden(1.1f, 1.1f), dwa(2.2f, 2.2f);
	Vector2 trzy = jeden + dwa;
	std::cout << jeden << dwa << trzy << std::endl;
	

}