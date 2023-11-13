class Counter {
public:
	int count;
	int x;
	Counter(int count);
	Counter();

	void incr(Counter& a);
	void decr(Counter& a);
	void remain(Counter& a);
	void calculation(Counter& a, char b);
	int getCount() const;
};