 #ifndef FIXED_HPP
 #define FIXED_HPP

 #include <iostream>
 #include <string>


 class Fixed{
	private:
		int n;
		static const int nbr;

	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
 };

 #endif