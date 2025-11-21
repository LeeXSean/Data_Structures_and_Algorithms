#include <iostream>
#include <string>
#include <stack>



#if 0
class LinkStack
{
private:
	struct Node
	{
		int data_;
		Node* next_;

		Node(int data = 0)
			: data_(data)
			, next_(nullptr)
		{ }
	};

	Node* head_;
	int size_;

public:
	LinkStack()
		: size_(0)
	{
		head_ = new Node();
	}
	~LinkStack()
	{
		Node* p = head_;
		while (p != nullptr)
		{
			head_ = head_->next_;
			delete p;
			p = head_;
		}
	}

public:
	// 入栈
	void push(int val)
	{
		Node* node = new Node(val);
		node->next_ = head_->next_;
		head_->next_ = node;
		size_++;
	}

	// 出栈
	void pop()
	{
		if (empty())
		{
			throw "THE STACK IS EMPTY!";
		}
		Node* p = head_->next_;
		head_->next_ = p->next_;
		delete p;
		size_--;
	}

	// 访问栈顶元素
	int top() const
	{
		if (empty())
		{
			throw "THE STACK IS EMPTY!";
		}
		return head_->next_->data_;
	}

	// 栈是否为空
	bool empty() const
	{
		return head_->next_ == nullptr;
	}

	// 栈元素数目
	int size() const
	{
		return size_;
	}
};

int main()
{
	int arr[] = { 21, 75, 86, 24, 64, 100 };
	LinkStack s;

	for (int v : arr)
	{
		s.push(v);
	}
	// s.pop();

	std::cout << "栈中的元素数目为 " << s.size() << std::endl;

	std::cout << "从栈顶开始访问: ";
	while (!s.empty())
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;
}
#endif