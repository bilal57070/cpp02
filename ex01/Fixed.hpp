#ifndef FIXED_HPP
 #define FIXED_HPP

 #include <iostream>
 #include <string>
 #include <cmath>


 class Fixed{
	private:
		int n;
		static int nbr;

	public:
		Fixed();
		Fixed(const Fixed &uno);
		Fixed(const int ar);
		Fixed(const float tr);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed& operator=(const Fixed &uno);
		float toFloat(void) const;
		int toInt(void) const;
		friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
 };

 #endif