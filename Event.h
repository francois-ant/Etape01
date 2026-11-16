class Event
{
private:
	int code;
	char* title;
public:
	Event();
	Event(int, const char *)
	Event(const Event &)
	-Event();

	void setCode(int);
	void setTitle(const char *);

	int getCode() const;
	const char * getTitle() const;
	
	void display() const;
};
