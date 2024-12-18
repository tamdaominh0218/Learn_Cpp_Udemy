#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
	int* data;

public:
	//constructor
	Move(int val_data);
	//copy constructor
	Move(const Move& source);
	//move constructor
	Move(Move&& source) noexcept;
	~Move();

};

//Constructor, cấp phát bộ nhớ cho data và gán giá trị.
Move::Move(int val_data)
{
	data = new int;
	*data = val_data;
	cout << "Constructor for: " << *data << endl;
}

//Copy constructor, thực hiện sao chép sâu (deep copy) bằng cách tạo một vùng nhớ mới và sao chép giá trị từ source.data.
Move::Move(const Move& source)
	:Move{*source.data}
{
	cout << "Copy constructor - deep copy for: " << *data << endl;
}

//Move constructor, di chuyển quyền sở hữu con trỏ data từ source sang đối tượng hiện tại và đặt source.data thành nullptr để tránh giải phóng bộ nhớ hai lần.
Move::Move(Move&& source) noexcept
	:data{ source.data }
{
	source.data = nullptr;
	cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move()
{
	if (data != nullptr)
	{
		cout << "Destructor freeing data for: " << *data << endl;
	}
	else
	{
		cout << "Destructor freeing data for nullptr " << endl;
	}
	delete data;
}

int main() {
	vector<Move> v;
	v.push_back(Move(10));

	v.push_back(Move(20));
	v.push_back(Move(30));
	v.push_back(Move(40));
	v.push_back(Move(50));
	v.push_back(Move(60));
	v.push_back(Move(70));
	v.push_back(Move(80));
	v.push_back(Move(90));
	v.push_back(Move(100));

	return 0;
}