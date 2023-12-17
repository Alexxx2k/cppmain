#include <cstddef>

class String
{
	private:
		std::size_t size;
		std::size_t capacity;
		char* pointer;
		void swap(String& right) noexcept;

	public:
		String();
		~String();
		String(const char* str);
		String(const String& str);
		String(String&& str) noexcept;
		String& operator= (const char* str);
		String& operator= (String&& str) noexcept;
		char& operator[] (std::size_t pos);
		String& insert(std::size_t pos, const char* str);
		int compare(const String& str);
};
