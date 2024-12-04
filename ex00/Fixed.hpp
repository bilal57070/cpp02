 #ifndef FIXED_HPP
 #define FIXED_HPP

 #include <iostream>
 #include <string>


 class Fixed{
	private:
		int n;
		static int nbr;

	public:
		Fixed();
		Fixed(const Fixed &uno);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed& operator=(const Fixed &uno);
 };

 #endif